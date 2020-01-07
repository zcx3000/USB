// intrface.h
//
// Generated by C DriverWizard 3.2.0 (Build 2485)
// Requires DDK Only
// File created on 8/28/2008
//

// Define an Interface Guid for MyUsbLowerFilter device class.
// This GUID is used to register (IoRegisterDeviceInterface)
// an instance of an interface so that user application
// can control the MyUsbLowerFilter device.
//
//  {20E40F5E-E31F-4AB4-A9C7-6E0647BBB8D1}
DEFINE_GUID(GUID_DEVINTERFACE_MYUSBLOWERFILTER,
    0x20E40F5E, 0xE31F, 0x4AB4, 0xA9, 0xC7, 0x6E, 0x06, 0x47, 0xBB, 0xB8, 0xD1);

// GUID definition are required to be outside of header inclusion pragma to avoid
// error during precompiled headers.
//

#ifndef __INTRFACE_H__
#define __INTRFACE_H__

#define FILE_DEVICE_MYUSBLOWERFILTER  0x8000

// Define Interface reference/dereference routines for
// Interfaces exported by IRP_MN_QUERY_INTERFACE

#define MYUSBLOWERFILTER_IOCTL(index) \
    CTL_CODE(FILE_DEVICE_MYUSBLOWERFILTER, index, METHOD_BUFFERED, FILE_READ_DATA)


#endif // __INTRFACE_H__