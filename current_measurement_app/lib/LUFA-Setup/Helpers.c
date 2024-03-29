#include <stdint.h>
#include <stdio.h>
#include "Helpers.h"

/*
 * We use the LUFA library to send debugging messages
 * to a virtual serial port over usb (CDC-ACM).
 * This is taken from the VirtualSerial demo
 * that ships with the LUFA library.
 * You can find it under
 * LUFA/Demos/Device/ClassDriver/VirtualSerial/VirtualSerial.c
 */

#include "Demos/Device/ClassDriver/VirtualSerial/Descriptors.h"
#include "LUFA/Drivers/Peripheral/Serial.h"

#include "LUFAConfig.h"
// #include "LUFA/Drivers/Peripheral/Serial.h"
#include <avr/power.h>
#include <avr/io.h>
#include <avr/wdt.h>
#include <avr/interrupt.h>

USB_ClassInfo_CDC_Device_t VirtualSerial_CDC_Interface =
        {
                .Config =
                        {
                                .ControlInterfaceNumber         = 0,
                                .DataINEndpoint                 =
                                        {
                                                .Address                = CDC_TX_EPADDR,
                                                .Size                   = CDC_TXRX_EPSIZE,
                                                .Banks                  = 1,
                                        },
                                .DataOUTEndpoint                =
                                        {
                                                .Address                = CDC_RX_EPADDR,
                                                .Size                   = CDC_TXRX_EPSIZE,
                                                .Banks                  = 1,
                                        },
                                .NotificationEndpoint           =
                                        {
                                                .Address                = CDC_NOTIFICATION_EPADDR,
                                                .Size                   = CDC_NOTIFICATION_EPSIZE,
                                                .Banks                  = 1,
                                        },
                        },
        };

void setUpUsbSerial(void) {
  MCUSR &= ~(1 << WDRF);
  wdt_disable();
  clock_prescale_set(clock_div_1);
  USB_Init();
  wdt_reset();
  sei();
}

void debug(const char *data) {
  CDC_Device_SendString(&VirtualSerial_CDC_Interface, data);
  CDC_Device_USBTask(&VirtualSerial_CDC_Interface);
}

void writeByte(uint8_t byte)
{
  CDC_Device_SendByte(&VirtualSerial_CDC_Interface, byte);
  CDC_Device_USBTask(&VirtualSerial_CDC_Interface);
}

uint8_t readByte(void)
{
  return CDC_Device_ReceiveByte(&VirtualSerial_CDC_Interface);
}

void debugSized(const char *data, uint16_t size)
{
  for(;size > 0; size--)
    {
      writeByte(*data);
      data++;
    }
  CDC_Device_USBTask(&VirtualSerial_CDC_Interface);
}

void periodicUsbTask(void) {
  CDC_Device_USBTask(&VirtualSerial_CDC_Interface);
}

/*********************************************************
 **                                                     **
 **   USB Functions used from LUFA CDC Virtual Serial   **
 **                                                     **
 ********************************************************/

/** Event handler for the library USB Connection event. */
void EVENT_USB_Device_Connect(void)
{
  // USB_LED_ON();
}

/** Event handler for the library USB Disconnection event. */
void EVENT_USB_Device_Disconnect(void)
{
  // USB_LED_OFF();
}

/** Event handler for the library USB Configuration Changed event. */
void EVENT_USB_Device_ConfigurationChanged(void)
{
  bool ConfigSuccess = true;
  ConfigSuccess &= CDC_Device_ConfigureEndpoints(&VirtualSerial_CDC_Interface);
}

/** Event handler for the library USB Control Request reception event. */
void EVENT_USB_Device_ControlRequest(void)
{
  CDC_Device_ProcessControlRequest(&VirtualSerial_CDC_Interface);
}

/** Event handler for the CDC Class driver Line Encoding Changed event.
 *
 *  \param[in] CDCInterfaceInfo  Pointer to the CDC class interface configuration structure being referenced
 */
void EVENT_CDC_Device_LineEncodingChanged(USB_ClassInfo_CDC_Device_t* const CDCInterfaceInfo)
{
  uint8_t ConfigMask = 0;

  switch (CDCInterfaceInfo->State.LineEncoding.ParityType)
  {
    case CDC_PARITY_Odd:
      ConfigMask = ((1 << UPM11) | (1 << UPM10));
      break;
    case CDC_PARITY_Even:
      ConfigMask = (1 << UPM11);
      break;
  }

  if (CDCInterfaceInfo->State.LineEncoding.CharFormat == CDC_LINEENCODING_TwoStopBits)
    ConfigMask |= (1 << USBS1);

  switch (CDCInterfaceInfo->State.LineEncoding.DataBits)
  {
    case 6:
      ConfigMask |= (1 << UCSZ10);
      break;
    case 7:
      ConfigMask |= (1 << UCSZ11);
      break;
    case 8:
      ConfigMask |= ((1 << UCSZ11) | (1 << UCSZ10));
      break;
  }

  /* Must turn off USART before reconfiguring it, otherwise incorrect operation may occur */
  UCSR1B = 0;
  UCSR1A = 0;
  UCSR1C = 0;

  /* Set the new baud rate before configuring the USART */
  UBRR1  = SERIAL_2X_UBBRVAL(CDCInterfaceInfo->State.LineEncoding.BaudRateBPS);

  /* Reconfigure the USART in double speed mode for a wider baud rate range at the expense of accuracy */
  UCSR1C = ConfigMask;
  UCSR1A = (1 << U2X1);
  UCSR1B = ((1 << RXCIE1) | (1 << TXEN1) | (1 << RXEN1));
}





