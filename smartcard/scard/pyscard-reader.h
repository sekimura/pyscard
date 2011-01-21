/*==============================================================================
This file contains SCARD_ATTR attributes definitions taken from reader.h, in 
MUSCLE SmartCard Development ( http://www.linuxnet.com ). It allows to
build pyscard on Mac OS X without any dependency on the muscle source code.
Indeed, default Mac OS X does not containt reader.h as part of the PCSC.framework.

Copyright (C) 1999-2005 David Corcoran <corcoran@linuxnet.com>
Copyright (C) 1999-2009 Ludovic Rousseau <ludovic.rousseau@free.fr>
================================================================================
==============================================================================*/

#define SCARD_ATTR_VALUE(Class, Tag) ((((ULONG)(Class)) << 16) | ((ULONG)(Tag)))

#define SCARD_CLASS_VENDOR_INFO     1   
#define SCARD_CLASS_COMMUNICATIONS  2   
#define SCARD_CLASS_PROTOCOL        3   
#define SCARD_CLASS_POWER_MGMT      4   
#define SCARD_CLASS_SECURITY        5   
#define SCARD_CLASS_MECHANICAL      6   
#define SCARD_CLASS_VENDOR_DEFINED  7   
#define SCARD_CLASS_IFD_PROTOCOL    8   
#define SCARD_CLASS_ICC_STATE       9   
#define SCARD_CLASS_SYSTEM     0x7fff   
#define SCARD_ATTR_VENDOR_NAME SCARD_ATTR_VALUE(SCARD_CLASS_VENDOR_INFO, 0x0100) 
#define SCARD_ATTR_VENDOR_IFD_TYPE SCARD_ATTR_VALUE(SCARD_CLASS_VENDOR_INFO, 0x0101) 
#define SCARD_ATTR_VENDOR_IFD_VERSION SCARD_ATTR_VALUE(SCARD_CLASS_VENDOR_INFO, 0x0102) 
#define SCARD_ATTR_VENDOR_IFD_SERIAL_NO SCARD_ATTR_VALUE(SCARD_CLASS_VENDOR_INFO, 0x0103) 
#define SCARD_ATTR_CHANNEL_ID SCARD_ATTR_VALUE(SCARD_CLASS_COMMUNICATIONS, 0x0110) 
#define SCARD_ATTR_ASYNC_PROTOCOL_TYPES SCARD_ATTR_VALUE(SCARD_CLASS_PROTOCOL, 0x0120) 
#define SCARD_ATTR_DEFAULT_CLK SCARD_ATTR_VALUE(SCARD_CLASS_PROTOCOL, 0x0121) 
#define SCARD_ATTR_MAX_CLK SCARD_ATTR_VALUE(SCARD_CLASS_PROTOCOL, 0x0122) 
#define SCARD_ATTR_DEFAULT_DATA_RATE SCARD_ATTR_VALUE(SCARD_CLASS_PROTOCOL, 0x0123) 
#define SCARD_ATTR_MAX_DATA_RATE SCARD_ATTR_VALUE(SCARD_CLASS_PROTOCOL, 0x0124) 
#define SCARD_ATTR_MAX_IFSD SCARD_ATTR_VALUE(SCARD_CLASS_PROTOCOL, 0x0125) 
#define SCARD_ATTR_SYNC_PROTOCOL_TYPES SCARD_ATTR_VALUE(SCARD_CLASS_PROTOCOL, 0x0126) 
#define SCARD_ATTR_POWER_MGMT_SUPPORT SCARD_ATTR_VALUE(SCARD_CLASS_POWER_MGMT, 0x0131) 
#define SCARD_ATTR_USER_TO_CARD_AUTH_DEVICE SCARD_ATTR_VALUE(SCARD_CLASS_SECURITY, 0x0140) 
#define SCARD_ATTR_USER_AUTH_INPUT_DEVICE SCARD_ATTR_VALUE(SCARD_CLASS_SECURITY, 0x0142) 
#define SCARD_ATTR_CHARACTERISTICS SCARD_ATTR_VALUE(SCARD_CLASS_MECHANICAL, 0x0150) 
#define SCARD_ATTR_CURRENT_PROTOCOL_TYPE SCARD_ATTR_VALUE(SCARD_CLASS_IFD_PROTOCOL, 0x0201) 
#define SCARD_ATTR_CURRENT_CLK SCARD_ATTR_VALUE(SCARD_CLASS_IFD_PROTOCOL, 0x0202) 
#define SCARD_ATTR_CURRENT_F SCARD_ATTR_VALUE(SCARD_CLASS_IFD_PROTOCOL, 0x0203) 
#define SCARD_ATTR_CURRENT_D SCARD_ATTR_VALUE(SCARD_CLASS_IFD_PROTOCOL, 0x0204) 
#define SCARD_ATTR_CURRENT_N SCARD_ATTR_VALUE(SCARD_CLASS_IFD_PROTOCOL, 0x0205) 
#define SCARD_ATTR_CURRENT_W SCARD_ATTR_VALUE(SCARD_CLASS_IFD_PROTOCOL, 0x0206) 
#define SCARD_ATTR_CURRENT_IFSC SCARD_ATTR_VALUE(SCARD_CLASS_IFD_PROTOCOL, 0x0207) 
#define SCARD_ATTR_CURRENT_IFSD SCARD_ATTR_VALUE(SCARD_CLASS_IFD_PROTOCOL, 0x0208) 
#define SCARD_ATTR_CURRENT_BWT SCARD_ATTR_VALUE(SCARD_CLASS_IFD_PROTOCOL, 0x0209) 
#define SCARD_ATTR_CURRENT_CWT SCARD_ATTR_VALUE(SCARD_CLASS_IFD_PROTOCOL, 0x020a) 
#define SCARD_ATTR_CURRENT_EBC_ENCODING SCARD_ATTR_VALUE(SCARD_CLASS_IFD_PROTOCOL, 0x020b) 
#define SCARD_ATTR_EXTENDED_BWT SCARD_ATTR_VALUE(SCARD_CLASS_IFD_PROTOCOL, 0x020c) 
#define SCARD_ATTR_ICC_PRESENCE SCARD_ATTR_VALUE(SCARD_CLASS_ICC_STATE, 0x0300) 
#define SCARD_ATTR_ICC_INTERFACE_STATUS SCARD_ATTR_VALUE(SCARD_CLASS_ICC_STATE, 0x0301) 
#define SCARD_ATTR_CURRENT_IO_STATE SCARD_ATTR_VALUE(SCARD_CLASS_ICC_STATE, 0x0302) 
#define SCARD_ATTR_ATR_STRING SCARD_ATTR_VALUE(SCARD_CLASS_ICC_STATE, 0x0303) 
#define SCARD_ATTR_ICC_TYPE_PER_ATR SCARD_ATTR_VALUE(SCARD_CLASS_ICC_STATE, 0x0304) 
#define SCARD_ATTR_ESC_RESET SCARD_ATTR_VALUE(SCARD_CLASS_VENDOR_DEFINED, 0xA000) 
#define SCARD_ATTR_ESC_CANCEL SCARD_ATTR_VALUE(SCARD_CLASS_VENDOR_DEFINED, 0xA003) 
#define SCARD_ATTR_ESC_AUTHREQUEST SCARD_ATTR_VALUE(SCARD_CLASS_VENDOR_DEFINED, 0xA005) 
#define SCARD_ATTR_MAXINPUT SCARD_ATTR_VALUE(SCARD_CLASS_VENDOR_DEFINED, 0xA007) 
#define SCARD_ATTR_DEVICE_UNIT SCARD_ATTR_VALUE(SCARD_CLASS_SYSTEM, 0x0001) 
#define SCARD_ATTR_DEVICE_IN_USE SCARD_ATTR_VALUE(SCARD_CLASS_SYSTEM, 0x0002) 
#define SCARD_ATTR_DEVICE_FRIENDLY_NAME_A SCARD_ATTR_VALUE(SCARD_CLASS_SYSTEM, 0x0003)
#define SCARD_ATTR_DEVICE_SYSTEM_NAME_A SCARD_ATTR_VALUE(SCARD_CLASS_SYSTEM, 0x0004)
#define SCARD_ATTR_DEVICE_FRIENDLY_NAME_W SCARD_ATTR_VALUE(SCARD_CLASS_SYSTEM, 0x0005)
#define SCARD_ATTR_DEVICE_SYSTEM_NAME_W SCARD_ATTR_VALUE(SCARD_CLASS_SYSTEM, 0x0006)
#define SCARD_ATTR_SUPRESS_T1_IFS_REQUEST SCARD_ATTR_VALUE(SCARD_CLASS_SYSTEM, 0x0007) 
#ifdef UNICODE
#define SCARD_ATTR_DEVICE_FRIENDLY_NAME SCARD_ATTR_DEVICE_FRIENDLY_NAME_W 
#define SCARD_ATTR_DEVICE_SYSTEM_NAME SCARD_ATTR_DEVICE_SYSTEM_NAME_W 
#else
#define SCARD_ATTR_DEVICE_FRIENDLY_NAME SCARD_ATTR_DEVICE_FRIENDLY_NAME_A 
#define SCARD_ATTR_DEVICE_SYSTEM_NAME SCARD_ATTR_DEVICE_SYSTEM_NAME_A 
#endif
