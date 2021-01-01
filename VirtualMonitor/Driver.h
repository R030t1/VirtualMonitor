/*++

Module Name:
    driver.h

Abstract:
    This file contains the driver definitions.

Environment:
    User-mode Driver Framework 2

--*/

#define NOMINMAX
#include <windows.h>
#include <initguid.h>
#include <bugcodes.h>

#include <wdf.h>
#include <wudfwdm.h>
#include <iddcx.h>

#include <dxgi1_5.h>
#include <d3d11_2.h>
#include <avrt.h>
#include <wrl.h>

#include "device.h"
#include "queue.h"
#include "trace.h"

EXTERN_C_START

// WDFDRIVER Events
DRIVER_INITIALIZE DriverEntry;
EVT_WDF_DRIVER_DEVICE_ADD VirtualMonitorEvtDeviceAdd;
EVT_WDF_OBJECT_CONTEXT_CLEANUP VirtualMonitorEvtDriverContextCleanup;

EXTERN_C_END
