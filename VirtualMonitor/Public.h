/*++

Module Name:
    public.h

Abstract:
    This module contains the common declarations shared by driver
    and user applications.

Environment:
    driver and application

--*/

//
// Define an Interface Guid so that apps can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_VirtualMonitor,
    0x30b74321,0x9965,0x4003,0x87,0x11,0x77,0x34,0x3b,0x40,0xaa,0xab);
// {30b74321-9965-4003-8711-77343b40aaab}
