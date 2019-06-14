/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCKDEBUG_H
#define _MOCKDEBUG_H

#include "unity.h"
#include "debug.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void Mockdebug_Init(void);
void Mockdebug_Destroy(void);
void Mockdebug_Verify(void);


typedef void(*cmock_debug_func_ptr1)(uint8_t);
typedef void(*cmock_debug_func_ptr2)(uint8_t);


#define debugEnable_Expect() debugEnable_CMockExpect(__LINE__)
void debugEnable_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define debugDisable_Expect() debugDisable_CMockExpect(__LINE__)
void debugDisable_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define debugInit_Expect(receiveHandler) debugInit_CMockExpect(__LINE__, receiveHandler)
void debugInit_CMockExpect(UNITY_LINE_TYPE cmock_line, cmock_debug_func_ptr1 receiveHandler);
#define setDebugReceiveHandler_Expect(receiveHandler) setDebugReceiveHandler_CMockExpect(__LINE__, receiveHandler)
void setDebugReceiveHandler_CMockExpect(UNITY_LINE_TYPE cmock_line, cmock_debug_func_ptr2 receiveHandler);
#define debugNewLine_Expect() debugNewLine_CMockExpect(__LINE__)
void debugNewLine_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define debugWriteBool_Expect(input) debugWriteBool_CMockExpect(__LINE__, input)
void debugWriteBool_CMockExpect(UNITY_LINE_TYPE cmock_line, uint8_t input);
#define debugWriteLine_Expect(s) debugWriteLine_CMockExpect(__LINE__, s)
void debugWriteLine_CMockExpect(UNITY_LINE_TYPE cmock_line, char* s);
#define debugWriteString_Expect(s) debugWriteString_CMockExpect(__LINE__, s)
void debugWriteString_CMockExpect(UNITY_LINE_TYPE cmock_line, char* s);
#define debugWriteStringLength_Expect(s, length) debugWriteStringLength_CMockExpect(__LINE__, s, length)
void debugWriteStringLength_CMockExpect(UNITY_LINE_TYPE cmock_line, char* s, uint8_t length);
#define debugWriteChar_Expect(c) debugWriteChar_CMockExpect(__LINE__, c)
void debugWriteChar_CMockExpect(UNITY_LINE_TYPE cmock_line, uint8_t c);
#define debugWriteCharBlock_Expect(c) debugWriteCharBlock_CMockExpect(__LINE__, c)
void debugWriteCharBlock_CMockExpect(UNITY_LINE_TYPE cmock_line, uint8_t c);
#define debugWriteCharHelper_Expect(c, last) debugWriteCharHelper_CMockExpect(__LINE__, c, last)
void debugWriteCharHelper_CMockExpect(UNITY_LINE_TYPE cmock_line, uint8_t c, uint8_t last);
#define debugReadChar_Expect() debugReadChar_CMockExpect(__LINE__)
void debugReadChar_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define debugReadCharAvailable_ExpectAndReturn(cmock_retval) debugReadCharAvailable_CMockExpectAndReturn(__LINE__, cmock_retval)
void debugReadCharAvailable_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t cmock_to_return);
#define debugReadCharProcessed_Expect() debugReadCharProcessed_CMockExpect(__LINE__)
void debugReadCharProcessed_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define debugGetChar_ExpectAndReturn(cmock_retval) debugGetChar_CMockExpectAndReturn(__LINE__, cmock_retval)
void debugGetChar_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t cmock_to_return);
#define debugWriteHex8_Expect(num) debugWriteHex8_CMockExpect(__LINE__, num)
void debugWriteHex8_CMockExpect(UNITY_LINE_TYPE cmock_line, uint8_t num);
#define debugWriteHex8Helper_Expect(num, last) debugWriteHex8Helper_CMockExpect(__LINE__, num, last)
void debugWriteHex8Helper_CMockExpect(UNITY_LINE_TYPE cmock_line, uint8_t num, uint8_t last);
#define debugWriteHex16_Expect(num) debugWriteHex16_CMockExpect(__LINE__, num)
void debugWriteHex16_CMockExpect(UNITY_LINE_TYPE cmock_line, uint16_t num);
#define debugWriteDec8_Expect(num) debugWriteDec8_CMockExpect(__LINE__, num)
void debugWriteDec8_CMockExpect(UNITY_LINE_TYPE cmock_line, uint8_t num);
#define debugWriteDec16_Expect(num) debugWriteDec16_CMockExpect(__LINE__, num)
void debugWriteDec16_CMockExpect(UNITY_LINE_TYPE cmock_line, uint16_t num);
#define debugWriteBin8_Expect(num) debugWriteBin8_CMockExpect(__LINE__, num)
void debugWriteBin8_CMockExpect(UNITY_LINE_TYPE cmock_line, uint8_t num);
#define debugWriteHex32_Expect(num) debugWriteHex32_CMockExpect(__LINE__, num)
void debugWriteHex32_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t num);
#define debugWriteBin32_Expect(num) debugWriteBin32_CMockExpect(__LINE__, num)
void debugWriteBin32_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t num);
#define debugWriteFloat_Expect(num) debugWriteFloat_CMockExpect(__LINE__, num)
void debugWriteFloat_CMockExpect(UNITY_LINE_TYPE cmock_line, float num);
#define debugWriteFloatFull_Expect(num) debugWriteFloatFull_CMockExpect(__LINE__, num)
void debugWriteFloatFull_CMockExpect(UNITY_LINE_TYPE cmock_line, float num);
#define debugWriteBin4_Expect(num) debugWriteBin4_CMockExpect(__LINE__, num)
void debugWriteBin4_CMockExpect(UNITY_LINE_TYPE cmock_line, uint8_t num);
#define debugWriteDec32_Expect(num) debugWriteDec32_CMockExpect(__LINE__, num)
void debugWriteDec32_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t num);
#define debugWriteDec32S_Expect(num) debugWriteDec32S_CMockExpect(__LINE__, num)
void debugWriteDec32S_CMockExpect(UNITY_LINE_TYPE cmock_line, int32_t num);
#define debugDone_Expect() debugDone_CMockExpect(__LINE__)
void debugDone_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define debugReady_Expect() debugReady_CMockExpect(__LINE__)
void debugReady_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define debugWaitUntilDone_Expect() debugWaitUntilDone_CMockExpect(__LINE__)
void debugWaitUntilDone_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define debugSending_ExpectAndReturn(cmock_retval) debugSending_CMockExpectAndReturn(__LINE__, cmock_retval)
void debugSending_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t cmock_to_return);
#define debugAck_Expect(c) debugAck_CMockExpect(__LINE__, c)
void debugAck_CMockExpect(UNITY_LINE_TYPE cmock_line, uint8_t c);
#define printUartHandler_Expect() printUartHandler_CMockExpect(__LINE__)
void printUartHandler_CMockExpect(UNITY_LINE_TYPE cmock_line);

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
