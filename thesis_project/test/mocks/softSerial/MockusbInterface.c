/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "MockusbInterface.h"

static const char* CMockString_CDCInterfaceInfo = "CDCInterfaceInfo";
static const char* CMockString_EVENT_CDC_Device_LineEncodingChanged = "EVENT_CDC_Device_LineEncodingChanged";
static const char* CMockString_EVENT_USB_Device_ConfigurationChanged = "EVENT_USB_Device_ConfigurationChanged";
static const char* CMockString_EVENT_USB_Device_Connect = "EVENT_USB_Device_Connect";
static const char* CMockString_EVENT_USB_Device_ControlRequest = "EVENT_USB_Device_ControlRequest";
static const char* CMockString_EVENT_USB_Device_Disconnect = "EVENT_USB_Device_Disconnect";
static const char* CMockString_str = "str";
static const char* CMockString_usbReceiveChar = "usbReceiveChar";
static const char* CMockString_usbSendChar = "usbSendChar";
static const char* CMockString_usbSendString = "usbSendString";
static const char* CMockString_usbTask = "usbTask";

typedef struct _CMOCK_usbSendChar_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char Expected_str;

} CMOCK_usbSendChar_CALL_INSTANCE;

typedef struct _CMOCK_usbSendString_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char* Expected_str;

} CMOCK_usbSendString_CALL_INSTANCE;

typedef struct _CMOCK_usbTask_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;

} CMOCK_usbTask_CALL_INSTANCE;

typedef struct _CMOCK_usbReceiveChar_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ReturnVal;

} CMOCK_usbReceiveChar_CALL_INSTANCE;

typedef struct _CMOCK_EVENT_USB_Device_Connect_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;

} CMOCK_EVENT_USB_Device_Connect_CALL_INSTANCE;

typedef struct _CMOCK_EVENT_USB_Device_Disconnect_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;

} CMOCK_EVENT_USB_Device_Disconnect_CALL_INSTANCE;

typedef struct _CMOCK_EVENT_USB_Device_ConfigurationChanged_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;

} CMOCK_EVENT_USB_Device_ConfigurationChanged_CALL_INSTANCE;

typedef struct _CMOCK_EVENT_USB_Device_ControlRequest_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;

} CMOCK_EVENT_USB_Device_ControlRequest_CALL_INSTANCE;

typedef struct _CMOCK_EVENT_CDC_Device_LineEncodingChanged_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  USB_ClassInfo_CDC_Device_t* Expected_CDCInterfaceInfo;

} CMOCK_EVENT_CDC_Device_LineEncodingChanged_CALL_INSTANCE;

static struct MockusbInterfaceInstance
{
  CMOCK_MEM_INDEX_TYPE usbSendChar_CallInstance;
  CMOCK_MEM_INDEX_TYPE usbSendString_CallInstance;
  CMOCK_MEM_INDEX_TYPE usbTask_CallInstance;
  CMOCK_MEM_INDEX_TYPE usbReceiveChar_CallInstance;
  CMOCK_MEM_INDEX_TYPE EVENT_USB_Device_Connect_CallInstance;
  CMOCK_MEM_INDEX_TYPE EVENT_USB_Device_Disconnect_CallInstance;
  CMOCK_MEM_INDEX_TYPE EVENT_USB_Device_ConfigurationChanged_CallInstance;
  CMOCK_MEM_INDEX_TYPE EVENT_USB_Device_ControlRequest_CallInstance;
  CMOCK_MEM_INDEX_TYPE EVENT_CDC_Device_LineEncodingChanged_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void MockusbInterface_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  UNITY_SET_DETAIL(CMockString_usbSendChar);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.usbSendChar_CallInstance, cmock_line, CMockStringCalledLess);
  UNITY_SET_DETAIL(CMockString_usbSendString);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.usbSendString_CallInstance, cmock_line, CMockStringCalledLess);
  UNITY_SET_DETAIL(CMockString_usbTask);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.usbTask_CallInstance, cmock_line, CMockStringCalledLess);
  UNITY_SET_DETAIL(CMockString_usbReceiveChar);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.usbReceiveChar_CallInstance, cmock_line, CMockStringCalledLess);
  UNITY_SET_DETAIL(CMockString_EVENT_USB_Device_Connect);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.EVENT_USB_Device_Connect_CallInstance, cmock_line, CMockStringCalledLess);
  UNITY_SET_DETAIL(CMockString_EVENT_USB_Device_Disconnect);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.EVENT_USB_Device_Disconnect_CallInstance, cmock_line, CMockStringCalledLess);
  UNITY_SET_DETAIL(CMockString_EVENT_USB_Device_ConfigurationChanged);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.EVENT_USB_Device_ConfigurationChanged_CallInstance, cmock_line, CMockStringCalledLess);
  UNITY_SET_DETAIL(CMockString_EVENT_USB_Device_ControlRequest);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.EVENT_USB_Device_ControlRequest_CallInstance, cmock_line, CMockStringCalledLess);
  UNITY_SET_DETAIL(CMockString_EVENT_CDC_Device_LineEncodingChanged);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.EVENT_CDC_Device_LineEncodingChanged_CallInstance, cmock_line, CMockStringCalledLess);
}

void MockusbInterface_Init(void)
{
  MockusbInterface_Destroy();
}

void MockusbInterface_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
}

void usbSendChar(char str)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_usbSendChar_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_usbSendChar);
  cmock_call_instance = (CMOCK_usbSendChar_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.usbSendChar_CallInstance);
  Mock.usbSendChar_CallInstance = CMock_Guts_MemNext(Mock.usbSendChar_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_usbSendChar,CMockString_str);
    UNITY_TEST_ASSERT_EQUAL_INT8(cmock_call_instance->Expected_str, str, cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_usbSendChar(CMOCK_usbSendChar_CALL_INSTANCE* cmock_call_instance, char str)
{
  cmock_call_instance->Expected_str = str;
}

void usbSendChar_CMockExpect(UNITY_LINE_TYPE cmock_line, char str)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_usbSendChar_CALL_INSTANCE));
  CMOCK_usbSendChar_CALL_INSTANCE* cmock_call_instance = (CMOCK_usbSendChar_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.usbSendChar_CallInstance = CMock_Guts_MemChain(Mock.usbSendChar_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_usbSendChar(cmock_call_instance, str);
  UNITY_CLR_DETAILS();
}

void usbSendString(char* str)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_usbSendString_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_usbSendString);
  cmock_call_instance = (CMOCK_usbSendString_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.usbSendString_CallInstance);
  Mock.usbSendString_CallInstance = CMock_Guts_MemNext(Mock.usbSendString_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_usbSendString,CMockString_str);
    UNITY_TEST_ASSERT_EQUAL_STRING(cmock_call_instance->Expected_str, str, cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_usbSendString(CMOCK_usbSendString_CALL_INSTANCE* cmock_call_instance, char* str)
{
  cmock_call_instance->Expected_str = str;
}

void usbSendString_CMockExpect(UNITY_LINE_TYPE cmock_line, char* str)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_usbSendString_CALL_INSTANCE));
  CMOCK_usbSendString_CALL_INSTANCE* cmock_call_instance = (CMOCK_usbSendString_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.usbSendString_CallInstance = CMock_Guts_MemChain(Mock.usbSendString_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_usbSendString(cmock_call_instance, str);
  UNITY_CLR_DETAILS();
}

void usbTask(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_usbTask_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_usbTask);
  cmock_call_instance = (CMOCK_usbTask_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.usbTask_CallInstance);
  Mock.usbTask_CallInstance = CMock_Guts_MemNext(Mock.usbTask_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
}

void usbTask_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_usbTask_CALL_INSTANCE));
  CMOCK_usbTask_CALL_INSTANCE* cmock_call_instance = (CMOCK_usbTask_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.usbTask_CallInstance = CMock_Guts_MemChain(Mock.usbTask_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  UNITY_CLR_DETAILS();
}

char usbReceiveChar(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_usbReceiveChar_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_usbReceiveChar);
  cmock_call_instance = (CMOCK_usbReceiveChar_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.usbReceiveChar_CallInstance);
  Mock.usbReceiveChar_CallInstance = CMock_Guts_MemNext(Mock.usbReceiveChar_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void usbReceiveChar_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, char cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_usbReceiveChar_CALL_INSTANCE));
  CMOCK_usbReceiveChar_CALL_INSTANCE* cmock_call_instance = (CMOCK_usbReceiveChar_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.usbReceiveChar_CallInstance = CMock_Guts_MemChain(Mock.usbReceiveChar_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

void EVENT_USB_Device_Connect(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_EVENT_USB_Device_Connect_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_EVENT_USB_Device_Connect);
  cmock_call_instance = (CMOCK_EVENT_USB_Device_Connect_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.EVENT_USB_Device_Connect_CallInstance);
  Mock.EVENT_USB_Device_Connect_CallInstance = CMock_Guts_MemNext(Mock.EVENT_USB_Device_Connect_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
}

void EVENT_USB_Device_Connect_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_EVENT_USB_Device_Connect_CALL_INSTANCE));
  CMOCK_EVENT_USB_Device_Connect_CALL_INSTANCE* cmock_call_instance = (CMOCK_EVENT_USB_Device_Connect_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.EVENT_USB_Device_Connect_CallInstance = CMock_Guts_MemChain(Mock.EVENT_USB_Device_Connect_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  UNITY_CLR_DETAILS();
}

void EVENT_USB_Device_Disconnect(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_EVENT_USB_Device_Disconnect_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_EVENT_USB_Device_Disconnect);
  cmock_call_instance = (CMOCK_EVENT_USB_Device_Disconnect_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.EVENT_USB_Device_Disconnect_CallInstance);
  Mock.EVENT_USB_Device_Disconnect_CallInstance = CMock_Guts_MemNext(Mock.EVENT_USB_Device_Disconnect_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
}

void EVENT_USB_Device_Disconnect_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_EVENT_USB_Device_Disconnect_CALL_INSTANCE));
  CMOCK_EVENT_USB_Device_Disconnect_CALL_INSTANCE* cmock_call_instance = (CMOCK_EVENT_USB_Device_Disconnect_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.EVENT_USB_Device_Disconnect_CallInstance = CMock_Guts_MemChain(Mock.EVENT_USB_Device_Disconnect_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  UNITY_CLR_DETAILS();
}

void EVENT_USB_Device_ConfigurationChanged(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_EVENT_USB_Device_ConfigurationChanged_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_EVENT_USB_Device_ConfigurationChanged);
  cmock_call_instance = (CMOCK_EVENT_USB_Device_ConfigurationChanged_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.EVENT_USB_Device_ConfigurationChanged_CallInstance);
  Mock.EVENT_USB_Device_ConfigurationChanged_CallInstance = CMock_Guts_MemNext(Mock.EVENT_USB_Device_ConfigurationChanged_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
}

void EVENT_USB_Device_ConfigurationChanged_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_EVENT_USB_Device_ConfigurationChanged_CALL_INSTANCE));
  CMOCK_EVENT_USB_Device_ConfigurationChanged_CALL_INSTANCE* cmock_call_instance = (CMOCK_EVENT_USB_Device_ConfigurationChanged_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.EVENT_USB_Device_ConfigurationChanged_CallInstance = CMock_Guts_MemChain(Mock.EVENT_USB_Device_ConfigurationChanged_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  UNITY_CLR_DETAILS();
}

void EVENT_USB_Device_ControlRequest(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_EVENT_USB_Device_ControlRequest_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_EVENT_USB_Device_ControlRequest);
  cmock_call_instance = (CMOCK_EVENT_USB_Device_ControlRequest_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.EVENT_USB_Device_ControlRequest_CallInstance);
  Mock.EVENT_USB_Device_ControlRequest_CallInstance = CMock_Guts_MemNext(Mock.EVENT_USB_Device_ControlRequest_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
}

void EVENT_USB_Device_ControlRequest_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_EVENT_USB_Device_ControlRequest_CALL_INSTANCE));
  CMOCK_EVENT_USB_Device_ControlRequest_CALL_INSTANCE* cmock_call_instance = (CMOCK_EVENT_USB_Device_ControlRequest_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.EVENT_USB_Device_ControlRequest_CallInstance = CMock_Guts_MemChain(Mock.EVENT_USB_Device_ControlRequest_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  UNITY_CLR_DETAILS();
}

void EVENT_CDC_Device_LineEncodingChanged(USB_ClassInfo_CDC_Device_t* const CDCInterfaceInfo)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_EVENT_CDC_Device_LineEncodingChanged_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_EVENT_CDC_Device_LineEncodingChanged);
  cmock_call_instance = (CMOCK_EVENT_CDC_Device_LineEncodingChanged_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.EVENT_CDC_Device_LineEncodingChanged_CallInstance);
  Mock.EVENT_CDC_Device_LineEncodingChanged_CallInstance = CMock_Guts_MemNext(Mock.EVENT_CDC_Device_LineEncodingChanged_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_EVENT_CDC_Device_LineEncodingChanged,CMockString_CDCInterfaceInfo);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_CDCInterfaceInfo), (void*)(CDCInterfaceInfo), sizeof(USB_ClassInfo_CDC_Device_t), cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_EVENT_CDC_Device_LineEncodingChanged(CMOCK_EVENT_CDC_Device_LineEncodingChanged_CALL_INSTANCE* cmock_call_instance, USB_ClassInfo_CDC_Device_t* const CDCInterfaceInfo)
{
  cmock_call_instance->Expected_CDCInterfaceInfo = CDCInterfaceInfo;
}

void EVENT_CDC_Device_LineEncodingChanged_CMockExpect(UNITY_LINE_TYPE cmock_line, USB_ClassInfo_CDC_Device_t* const CDCInterfaceInfo)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_EVENT_CDC_Device_LineEncodingChanged_CALL_INSTANCE));
  CMOCK_EVENT_CDC_Device_LineEncodingChanged_CALL_INSTANCE* cmock_call_instance = (CMOCK_EVENT_CDC_Device_LineEncodingChanged_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.EVENT_CDC_Device_LineEncodingChanged_CallInstance = CMock_Guts_MemChain(Mock.EVENT_CDC_Device_LineEncodingChanged_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_EVENT_CDC_Device_LineEncodingChanged(cmock_call_instance, CDCInterfaceInfo);
  UNITY_CLR_DETAILS();
}

