/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "lib/PAC1720_driver/MockPAC1720_driver.h"

static const char* CMockString_device_ptr = "device_ptr";
static const char* CMockString_get_TEST_DRIVER_FPTR_FIELD = "get_TEST_DRIVER_FPTR_FIELD";
static const char* CMockString_init_device_PAC1720 = "init_device_PAC1720";

typedef struct _CMOCK_init_device_PAC1720_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  CMOCK_ARG_MODE IgnoreMode;
  int8_t ReturnVal;
  struct PAC1720_device* Expected_device_ptr;
  CEXCEPTION_T ExceptionToThrow;
  int Expected_device_ptr_Depth;
  int ReturnThruPtr_device_ptr_Used;
  struct PAC1720_device* ReturnThruPtr_device_ptr_Val;
  int ReturnThruPtr_device_ptr_Size;
  int IgnoreArg_device_ptr;

} CMOCK_init_device_PAC1720_CALL_INSTANCE;

typedef struct _CMOCK_get_TEST_DRIVER_FPTR_FIELD_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  CMOCK_ARG_MODE IgnoreMode;
  const void* ReturnVal;
  CEXCEPTION_T ExceptionToThrow;

} CMOCK_get_TEST_DRIVER_FPTR_FIELD_CALL_INSTANCE;

static struct MockPAC1720_driverInstance
{
  int init_device_PAC1720_IgnoreBool;
  int8_t init_device_PAC1720_FinalReturn;
  CMOCK_init_device_PAC1720_CALLBACK init_device_PAC1720_CallbackFunctionPointer;
  int init_device_PAC1720_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE init_device_PAC1720_CallInstance;
  int get_TEST_DRIVER_FPTR_FIELD_IgnoreBool;
  const void* get_TEST_DRIVER_FPTR_FIELD_FinalReturn;
  CMOCK_get_TEST_DRIVER_FPTR_FIELD_CALLBACK get_TEST_DRIVER_FPTR_FIELD_CallbackFunctionPointer;
  int get_TEST_DRIVER_FPTR_FIELD_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE get_TEST_DRIVER_FPTR_FIELD_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void MockPAC1720_driver_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.init_device_PAC1720_IgnoreBool)
    Mock.init_device_PAC1720_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_init_device_PAC1720);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.init_device_PAC1720_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.init_device_PAC1720_CallbackFunctionPointer != NULL)
    Mock.init_device_PAC1720_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.get_TEST_DRIVER_FPTR_FIELD_IgnoreBool)
    Mock.get_TEST_DRIVER_FPTR_FIELD_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_get_TEST_DRIVER_FPTR_FIELD);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.get_TEST_DRIVER_FPTR_FIELD_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.get_TEST_DRIVER_FPTR_FIELD_CallbackFunctionPointer != NULL)
    Mock.get_TEST_DRIVER_FPTR_FIELD_CallInstance = CMOCK_GUTS_NONE;
}

void MockPAC1720_driver_Init(void)
{
  MockPAC1720_driver_Destroy();
}

void MockPAC1720_driver_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.init_device_PAC1720_CallbackFunctionPointer = NULL;
  Mock.init_device_PAC1720_CallbackCalls = 0;
  Mock.get_TEST_DRIVER_FPTR_FIELD_CallbackFunctionPointer = NULL;
  Mock.get_TEST_DRIVER_FPTR_FIELD_CallbackCalls = 0;
}

int8_t init_device_PAC1720(struct PAC1720_device* device_ptr)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_init_device_PAC1720_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_init_device_PAC1720);
  cmock_call_instance = (CMOCK_init_device_PAC1720_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.init_device_PAC1720_CallInstance);
  Mock.init_device_PAC1720_CallInstance = CMock_Guts_MemNext(Mock.init_device_PAC1720_CallInstance);
  if (Mock.init_device_PAC1720_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.init_device_PAC1720_FinalReturn;
    Mock.init_device_PAC1720_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.init_device_PAC1720_CallbackFunctionPointer != NULL)
  {
    return Mock.init_device_PAC1720_CallbackFunctionPointer(device_ptr, Mock.init_device_PAC1720_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->IgnoreMode != CMOCK_ARG_NONE)
  {
  if (!cmock_call_instance->IgnoreArg_device_ptr)
  {
    UNITY_SET_DETAILS(CMockString_init_device_PAC1720,CMockString_device_ptr);
    if (cmock_call_instance->Expected_device_ptr == NULL)
      { UNITY_TEST_ASSERT_NULL(device_ptr, cmock_line, CMockStringExpNULL); }
    else
      { UNITY_TEST_ASSERT_EQUAL_MEMORY_ARRAY((void*)(cmock_call_instance->Expected_device_ptr), (void*)(device_ptr), sizeof(struct PAC1720_device), cmock_call_instance->Expected_device_ptr_Depth, cmock_line, CMockStringMismatch); }
  }
  }
  if (cmock_call_instance->ExceptionToThrow != CEXCEPTION_NONE)
  {
    UNITY_CLR_DETAILS();
    Throw(cmock_call_instance->ExceptionToThrow);
  }
  if (cmock_call_instance->ReturnThruPtr_device_ptr_Used)
  {
    UNITY_TEST_ASSERT_NOT_NULL(device_ptr, cmock_line, CMockStringPtrIsNULL);
    memcpy((void*)device_ptr, (void*)cmock_call_instance->ReturnThruPtr_device_ptr_Val,
      cmock_call_instance->ReturnThruPtr_device_ptr_Size);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_init_device_PAC1720(CMOCK_init_device_PAC1720_CALL_INSTANCE* cmock_call_instance, struct PAC1720_device* device_ptr, int device_ptr_Depth)
{
  cmock_call_instance->Expected_device_ptr = device_ptr;
  cmock_call_instance->Expected_device_ptr_Depth = device_ptr_Depth;
  cmock_call_instance->IgnoreArg_device_ptr = 0;
  cmock_call_instance->ReturnThruPtr_device_ptr_Used = 0;
}

void init_device_PAC1720_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int8_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_init_device_PAC1720_CALL_INSTANCE));
  CMOCK_init_device_PAC1720_CALL_INSTANCE* cmock_call_instance = (CMOCK_init_device_PAC1720_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.init_device_PAC1720_CallInstance = CMock_Guts_MemChain(Mock.init_device_PAC1720_CallInstance, cmock_guts_index);
  Mock.init_device_PAC1720_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExceptionToThrow = CEXCEPTION_NONE;
  cmock_call_instance->IgnoreMode = CMOCK_ARG_ALL;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.init_device_PAC1720_IgnoreBool = (int)1;
}

void init_device_PAC1720_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, int8_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_init_device_PAC1720_CALL_INSTANCE));
  CMOCK_init_device_PAC1720_CALL_INSTANCE* cmock_call_instance = (CMOCK_init_device_PAC1720_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.init_device_PAC1720_CallInstance = CMock_Guts_MemChain(Mock.init_device_PAC1720_CallInstance, cmock_guts_index);
  Mock.init_device_PAC1720_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExceptionToThrow = CEXCEPTION_NONE;
  cmock_call_instance->IgnoreMode = CMOCK_ARG_ALL;
  cmock_call_instance->ReturnVal = cmock_to_return;
  cmock_call_instance->IgnoreMode = CMOCK_ARG_NONE;
}

void init_device_PAC1720_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, struct PAC1720_device* device_ptr, int8_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_init_device_PAC1720_CALL_INSTANCE));
  CMOCK_init_device_PAC1720_CALL_INSTANCE* cmock_call_instance = (CMOCK_init_device_PAC1720_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.init_device_PAC1720_CallInstance = CMock_Guts_MemChain(Mock.init_device_PAC1720_CallInstance, cmock_guts_index);
  Mock.init_device_PAC1720_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExceptionToThrow = CEXCEPTION_NONE;
  cmock_call_instance->IgnoreMode = CMOCK_ARG_ALL;
  CMockExpectParameters_init_device_PAC1720(cmock_call_instance, device_ptr, 1);
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

void init_device_PAC1720_StubWithCallback(CMOCK_init_device_PAC1720_CALLBACK Callback)
{
  Mock.init_device_PAC1720_IgnoreBool = (int)0;
  Mock.init_device_PAC1720_CallbackFunctionPointer = Callback;
}

void init_device_PAC1720_CMockExpectAndThrow(UNITY_LINE_TYPE cmock_line, struct PAC1720_device* device_ptr, CEXCEPTION_T cmock_to_throw)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_init_device_PAC1720_CALL_INSTANCE));
  CMOCK_init_device_PAC1720_CALL_INSTANCE* cmock_call_instance = (CMOCK_init_device_PAC1720_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.init_device_PAC1720_CallInstance = CMock_Guts_MemChain(Mock.init_device_PAC1720_CallInstance, cmock_guts_index);
  Mock.init_device_PAC1720_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExceptionToThrow = CEXCEPTION_NONE;
  cmock_call_instance->IgnoreMode = CMOCK_ARG_ALL;
  CMockExpectParameters_init_device_PAC1720(cmock_call_instance, device_ptr, 1);
  cmock_call_instance->ExceptionToThrow = cmock_to_throw;
}

void init_device_PAC1720_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, struct PAC1720_device* device_ptr, int device_ptr_Depth, int8_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_init_device_PAC1720_CALL_INSTANCE));
  CMOCK_init_device_PAC1720_CALL_INSTANCE* cmock_call_instance = (CMOCK_init_device_PAC1720_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.init_device_PAC1720_CallInstance = CMock_Guts_MemChain(Mock.init_device_PAC1720_CallInstance, cmock_guts_index);
  Mock.init_device_PAC1720_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExceptionToThrow = CEXCEPTION_NONE;
  cmock_call_instance->IgnoreMode = CMOCK_ARG_ALL;
  CMockExpectParameters_init_device_PAC1720(cmock_call_instance, device_ptr, device_ptr_Depth);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void init_device_PAC1720_CMockReturnMemThruPtr_device_ptr(UNITY_LINE_TYPE cmock_line, struct PAC1720_device* device_ptr, int cmock_size)
{
  CMOCK_init_device_PAC1720_CALL_INSTANCE* cmock_call_instance = (CMOCK_init_device_PAC1720_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.init_device_PAC1720_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringPtrPreExp);
  cmock_call_instance->ReturnThruPtr_device_ptr_Used = 1;
  cmock_call_instance->ReturnThruPtr_device_ptr_Val = device_ptr;
  cmock_call_instance->ReturnThruPtr_device_ptr_Size = cmock_size;
}

void init_device_PAC1720_CMockIgnoreArg_device_ptr(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_init_device_PAC1720_CALL_INSTANCE* cmock_call_instance = (CMOCK_init_device_PAC1720_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.init_device_PAC1720_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_device_ptr = 1;
}

const void* get_TEST_DRIVER_FPTR_FIELD(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_get_TEST_DRIVER_FPTR_FIELD_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_get_TEST_DRIVER_FPTR_FIELD);
  cmock_call_instance = (CMOCK_get_TEST_DRIVER_FPTR_FIELD_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.get_TEST_DRIVER_FPTR_FIELD_CallInstance);
  Mock.get_TEST_DRIVER_FPTR_FIELD_CallInstance = CMock_Guts_MemNext(Mock.get_TEST_DRIVER_FPTR_FIELD_CallInstance);
  if (Mock.get_TEST_DRIVER_FPTR_FIELD_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.get_TEST_DRIVER_FPTR_FIELD_FinalReturn;
    Mock.get_TEST_DRIVER_FPTR_FIELD_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.get_TEST_DRIVER_FPTR_FIELD_CallbackFunctionPointer != NULL)
  {
    return Mock.get_TEST_DRIVER_FPTR_FIELD_CallbackFunctionPointer(Mock.get_TEST_DRIVER_FPTR_FIELD_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->ExceptionToThrow != CEXCEPTION_NONE)
  {
    UNITY_CLR_DETAILS();
    Throw(cmock_call_instance->ExceptionToThrow);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void get_TEST_DRIVER_FPTR_FIELD_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, const void* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_get_TEST_DRIVER_FPTR_FIELD_CALL_INSTANCE));
  CMOCK_get_TEST_DRIVER_FPTR_FIELD_CALL_INSTANCE* cmock_call_instance = (CMOCK_get_TEST_DRIVER_FPTR_FIELD_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.get_TEST_DRIVER_FPTR_FIELD_CallInstance = CMock_Guts_MemChain(Mock.get_TEST_DRIVER_FPTR_FIELD_CallInstance, cmock_guts_index);
  Mock.get_TEST_DRIVER_FPTR_FIELD_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExceptionToThrow = CEXCEPTION_NONE;
  cmock_call_instance->IgnoreMode = CMOCK_ARG_ALL;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.get_TEST_DRIVER_FPTR_FIELD_IgnoreBool = (int)1;
}

void get_TEST_DRIVER_FPTR_FIELD_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, const void* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_get_TEST_DRIVER_FPTR_FIELD_CALL_INSTANCE));
  CMOCK_get_TEST_DRIVER_FPTR_FIELD_CALL_INSTANCE* cmock_call_instance = (CMOCK_get_TEST_DRIVER_FPTR_FIELD_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.get_TEST_DRIVER_FPTR_FIELD_CallInstance = CMock_Guts_MemChain(Mock.get_TEST_DRIVER_FPTR_FIELD_CallInstance, cmock_guts_index);
  Mock.get_TEST_DRIVER_FPTR_FIELD_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExceptionToThrow = CEXCEPTION_NONE;
  cmock_call_instance->IgnoreMode = CMOCK_ARG_ALL;
  cmock_call_instance->ReturnVal = cmock_to_return;
  cmock_call_instance->IgnoreMode = CMOCK_ARG_NONE;
}

void get_TEST_DRIVER_FPTR_FIELD_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, const void* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_get_TEST_DRIVER_FPTR_FIELD_CALL_INSTANCE));
  CMOCK_get_TEST_DRIVER_FPTR_FIELD_CALL_INSTANCE* cmock_call_instance = (CMOCK_get_TEST_DRIVER_FPTR_FIELD_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.get_TEST_DRIVER_FPTR_FIELD_CallInstance = CMock_Guts_MemChain(Mock.get_TEST_DRIVER_FPTR_FIELD_CallInstance, cmock_guts_index);
  Mock.get_TEST_DRIVER_FPTR_FIELD_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExceptionToThrow = CEXCEPTION_NONE;
  cmock_call_instance->IgnoreMode = CMOCK_ARG_ALL;
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

void get_TEST_DRIVER_FPTR_FIELD_StubWithCallback(CMOCK_get_TEST_DRIVER_FPTR_FIELD_CALLBACK Callback)
{
  Mock.get_TEST_DRIVER_FPTR_FIELD_IgnoreBool = (int)0;
  Mock.get_TEST_DRIVER_FPTR_FIELD_CallbackFunctionPointer = Callback;
}

void get_TEST_DRIVER_FPTR_FIELD_CMockExpectAndThrow(UNITY_LINE_TYPE cmock_line, CEXCEPTION_T cmock_to_throw)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_get_TEST_DRIVER_FPTR_FIELD_CALL_INSTANCE));
  CMOCK_get_TEST_DRIVER_FPTR_FIELD_CALL_INSTANCE* cmock_call_instance = (CMOCK_get_TEST_DRIVER_FPTR_FIELD_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.get_TEST_DRIVER_FPTR_FIELD_CallInstance = CMock_Guts_MemChain(Mock.get_TEST_DRIVER_FPTR_FIELD_CallInstance, cmock_guts_index);
  Mock.get_TEST_DRIVER_FPTR_FIELD_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExceptionToThrow = CEXCEPTION_NONE;
  cmock_call_instance->IgnoreMode = CMOCK_ARG_ALL;
  cmock_call_instance->ExceptionToThrow = cmock_to_throw;
}

