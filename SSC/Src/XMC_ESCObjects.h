/*
* This source file is part of the EtherCAT Slave Stack Code licensed by Beckhoff Automation GmbH & Co KG, 33415 Verl, Germany.
* The corresponding license agreement applies. This hint shall not be removed.
*/

/**
* \addtogroup XMC_ESC XMC_ESC
* @{
*/

/**
\file XMC_ESCObjects
\author ET9300Utilities.ApplicationHandler (Version 1.5.0.0) | EthercatSSC@beckhoff.com

\brief XMC_ESC specific objects<br>
\brief NOTE : This file will be overwritten if a new object dictionary is generated!<br>
*/

#if defined(_XMC__ESC_) && (_XMC__ESC_ == 1)
#define PROTO
#else
#define PROTO extern
#endif
/******************************************************************************
*                    Object 0x1600 : OUT_GENERIC process data mapping
******************************************************************************/
/**
* \addtogroup 0x1600 0x1600 | OUT_GENERIC process data mapping
* @{
* \brief Object 0x1600 (OUT_GENERIC process data mapping) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Reference to 0x7000.1<br>
* SubIndex 2 - Reference to 0x7000.3<br>
* SubIndex 3 - Reference to 0x7000.5<br>
* SubIndex 4 - Reference to 0x7000.7<br>
* SubIndex 5 - Reference to 0x7000.9<br>
* SubIndex 6 - Reference to 0x7000.11<br>
* SubIndex 7 - Reference to 0x7000.13<br>
* SubIndex 8 - Reference to 0x7000.15<br>
* SubIndex 9 - Reference to 0x7000.17<br>
* SubIndex 10 - Reference to 0x7000.19<br>
* SubIndex 11 - Reference to 0x7000.21<br>
* SubIndex 12 - Reference to 0x7000.23<br>
* SubIndex 13 - Reference to 0x7000.25<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1600[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex1 - Reference to 0x7000.1 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex2 - Reference to 0x7000.3 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex3 - Reference to 0x7000.5 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex4 - Reference to 0x7000.7 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex5 - Reference to 0x7000.9 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex6 - Reference to 0x7000.11 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex7 - Reference to 0x7000.13 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex8 - Reference to 0x7000.15 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex9 - Reference to 0x7000.17 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex10 - Reference to 0x7000.19 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex11 - Reference to 0x7000.21 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex12 - Reference to 0x7000.23 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }}; /* Subindex13 - Reference to 0x7000.25 */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x1600[] = "OUT_GENERIC process data mapping\000"
"SubIndex 001\000"
"SubIndex 002\000"
"SubIndex 003\000"
"SubIndex 004\000"
"SubIndex 005\000"
"SubIndex 006\000"
"SubIndex 007\000"
"SubIndex 008\000"
"SubIndex 009\000"
"SubIndex 010\000"
"SubIndex 011\000"
"SubIndex 012\000"
"SubIndex 013\000\377";
#endif //#ifdef _OBJD_

#ifndef _XMC__ESC_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 SI1; /* Subindex1 - Reference to 0x7000.1 */
UINT32 SI2; /* Subindex2 - Reference to 0x7000.3 */
UINT32 SI3; /* Subindex3 - Reference to 0x7000.5 */
UINT32 SI4; /* Subindex4 - Reference to 0x7000.7 */
UINT32 SI5; /* Subindex5 - Reference to 0x7000.9 */
UINT32 SI6; /* Subindex6 - Reference to 0x7000.11 */
UINT32 SI7; /* Subindex7 - Reference to 0x7000.13 */
UINT32 SI8; /* Subindex8 - Reference to 0x7000.15 */
UINT32 SI9; /* Subindex9 - Reference to 0x7000.17 */
UINT32 SI10; /* Subindex10 - Reference to 0x7000.19 */
UINT32 SI11; /* Subindex11 - Reference to 0x7000.21 */
UINT32 SI12; /* Subindex12 - Reference to 0x7000.23 */
UINT32 SI13; /* Subindex13 - Reference to 0x7000.25 */
} OBJ_STRUCT_PACKED_END
TOBJ1600;
#endif //#ifndef _XMC__ESC_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1600 OUT_GENERICProcessDataMapping0x1600
#if defined(_XMC__ESC_) && (_XMC__ESC_ == 1)
={13,0x70000120,0x70000320,0x70000520,0x70000720,0x70000920,0x70000B20,0x70000D20,0x70000F20,0x70001120,0x70001320,0x70001520,0x70001720,0x70001920}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1A00 : IN_GENERIC process data mapping
******************************************************************************/
/**
* \addtogroup 0x1A00 0x1A00 | IN_GENERIC process data mapping
* @{
* \brief Object 0x1A00 (IN_GENERIC process data mapping) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Reference to 0x6000.1<br>
* SubIndex 2 - Reference to 0x6000.3<br>
* SubIndex 3 - Reference to 0x6000.5<br>
* SubIndex 4 - Reference to 0x6000.7<br>
* SubIndex 5 - Reference to 0x6000.9<br>
* SubIndex 6 - Reference to 0x6000.11<br>
* SubIndex 7 - Reference to 0x6000.13<br>
* SubIndex 8 - Reference to 0x6000.15<br>
* SubIndex 9 - Reference to 0x6000.17<br>
* SubIndex 10 - Reference to 0x6000.19<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1A00[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex1 - Reference to 0x6000.1 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex2 - Reference to 0x6000.3 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex3 - Reference to 0x6000.5 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex4 - Reference to 0x6000.7 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex5 - Reference to 0x6000.9 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex6 - Reference to 0x6000.11 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex7 - Reference to 0x6000.13 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex8 - Reference to 0x6000.15 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex9 - Reference to 0x6000.17 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }}; /* Subindex10 - Reference to 0x6000.19 */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x1A00[] = "IN_GENERIC process data mapping\000"
"SubIndex 001\000"
"SubIndex 002\000"
"SubIndex 003\000"
"SubIndex 004\000"
"SubIndex 005\000"
"SubIndex 006\000"
"SubIndex 007\000"
"SubIndex 008\000"
"SubIndex 009\000"
"SubIndex 010\000\377";
#endif //#ifdef _OBJD_

#ifndef _XMC__ESC_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 SI1; /* Subindex1 - Reference to 0x6000.1 */
UINT32 SI2; /* Subindex2 - Reference to 0x6000.3 */
UINT32 SI3; /* Subindex3 - Reference to 0x6000.5 */
UINT32 SI4; /* Subindex4 - Reference to 0x6000.7 */
UINT32 SI5; /* Subindex5 - Reference to 0x6000.9 */
UINT32 SI6; /* Subindex6 - Reference to 0x6000.11 */
UINT32 SI7; /* Subindex7 - Reference to 0x6000.13 */
UINT32 SI8; /* Subindex8 - Reference to 0x6000.15 */
UINT32 SI9; /* Subindex9 - Reference to 0x6000.17 */
UINT32 SI10; /* Subindex10 - Reference to 0x6000.19 */
} OBJ_STRUCT_PACKED_END
TOBJ1A00;
#endif //#ifndef _XMC__ESC_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1A00 IN_GENERICProcessDataMapping0x1A00
#if defined(_XMC__ESC_) && (_XMC__ESC_ == 1)
={10,0x60000120,0x60000320,0x60000520,0x60000720,0x60000920,0x60000B20,0x60000D20,0x60000F20,0x60001120,0x60001320}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1C12 : SyncManager 2 assignment
******************************************************************************/
/**
* \addtogroup 0x1C12 0x1C12 | SyncManager 2 assignment
* @{
* \brief Object 0x1C12 (SyncManager 2 assignment) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1C12[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x1C12[] = "SyncManager 2 assignment\000\377";
#endif //#ifdef _OBJD_

#ifndef _XMC__ESC_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT16 aEntries[1];  /**< \brief Subindex 1 - 1 */
} OBJ_STRUCT_PACKED_END
TOBJ1C12;
#endif //#ifndef _XMC__ESC_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1C12 sRxPDOassign
#if defined(_XMC__ESC_) && (_XMC__ESC_ == 1)
={1,{0x1600}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1C13 : SyncManager 3 assignment
******************************************************************************/
/**
* \addtogroup 0x1C13 0x1C13 | SyncManager 3 assignment
* @{
* \brief Object 0x1C13 (SyncManager 3 assignment) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1C13[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x1C13[] = "SyncManager 3 assignment\000\377";
#endif //#ifdef _OBJD_

#ifndef _XMC__ESC_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT16 aEntries[1];  /**< \brief Subindex 1 - 1 */
} OBJ_STRUCT_PACKED_END
TOBJ1C13;
#endif //#ifndef _XMC__ESC_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1C13 sTxPDOassign
#if defined(_XMC__ESC_) && (_XMC__ESC_ == 1)
={1,{0x1A00}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x6000 : IN_GENERIC
******************************************************************************/
/**
* \addtogroup 0x6000 0x6000 | IN_GENERIC
* @{
* \brief Object 0x6000 (IN_GENERIC) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - ActualConfig<br>
* SubIndex 2 does not exists<br>
* SubIndex 3 - CH0_ActualMode<br>
* SubIndex 4 does not exists<br>
* SubIndex 5 - CH0_ActualPosition<br>
* SubIndex 6 does not exists<br>
* SubIndex 7 - CH0_ActualVelocity<br>
* SubIndex 8 does not exists<br>
* SubIndex 9 - CH1_ActualMode<br>
* SubIndex 10 does not exists<br>
* SubIndex 11 - CH1_ActualPosition<br>
* SubIndex 12 does not exists<br>
* SubIndex 13 - CH1_ActualVelocity<br>
* SubIndex 14 does not exists<br>
* SubIndex 15 - CH2_ActualMode<br>
* SubIndex 16 does not exists<br>
* SubIndex 17 - CH2_ActualPosition<br>
* SubIndex 18 does not exists<br>
* SubIndex 19 - CH2_ActualVelocity<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x6000[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ }, /* Subindex1 - ActualConfig */
{ DEFTYPE_NULL , 0x00 , 0x0000 }, /* Subindex2 does not exists */
{ DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ }, /* Subindex3 - CH0_ActualMode */
{ DEFTYPE_NULL , 0x00 , 0x0000 }, /* Subindex4 does not exists */
{ DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ }, /* Subindex5 - CH0_ActualPosition */
{ DEFTYPE_NULL , 0x00 , 0x0000 }, /* Subindex6 does not exists */
{ DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ }, /* Subindex7 - CH0_ActualVelocity */
{ DEFTYPE_NULL , 0x00 , 0x0000 }, /* Subindex8 does not exists */
{ DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ }, /* Subindex9 - CH1_ActualMode */
{ DEFTYPE_NULL , 0x00 , 0x0000 }, /* Subindex10 does not exists */
{ DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ }, /* Subindex11 - CH1_ActualPosition */
{ DEFTYPE_NULL , 0x00 , 0x0000 }, /* Subindex12 does not exists */
{ DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ }, /* Subindex13 - CH1_ActualVelocity */
{ DEFTYPE_NULL , 0x00 , 0x0000 }, /* Subindex14 does not exists */
{ DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ }, /* Subindex15 - CH2_ActualMode */
{ DEFTYPE_NULL , 0x00 , 0x0000 }, /* Subindex16 does not exists */
{ DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ }, /* Subindex17 - CH2_ActualPosition */
{ DEFTYPE_NULL , 0x00 , 0x0000 }, /* Subindex18 does not exists */
{ DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ }}; /* Subindex19 - CH2_ActualVelocity */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x6000[] = "IN_GENERIC\000"
"ActualConfig\000"
"\000"
"CH0_ActualMode\000"
"\000"
"CH0_ActualPosition\000"
"\000"
"CH0_ActualVelocity\000"
"\000"
"CH1_ActualMode\000"
"\000"
"CH1_ActualPosition\000"
"\000"
"CH1_ActualVelocity\000"
"\000"
"CH2_ActualMode\000"
"\000"
"CH2_ActualPosition\000"
"\000"
"CH2_ActualVelocity\000\377";
#endif //#ifdef _OBJD_

#ifndef _XMC__ESC_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
INT32 ActualConfig; /* Subindex1 - ActualConfig */
INT32 CH0_ActualMode; /* Subindex3 - CH0_ActualMode */
INT32 CH0_ActualPosition; /* Subindex5 - CH0_ActualPosition */
INT32 CH0_ActualVelocity; /* Subindex7 - CH0_ActualVelocity */
INT32 CH1_ActualMode; /* Subindex9 - CH1_ActualMode */
INT32 CH1_ActualPosition; /* Subindex11 - CH1_ActualPosition */
INT32 CH1_ActualVelocity; /* Subindex13 - CH1_ActualVelocity */
INT32 CH2_ActualMode; /* Subindex15 - CH2_ActualMode */
INT32 CH2_ActualPosition; /* Subindex17 - CH2_ActualPosition */
INT32 CH2_ActualVelocity; /* Subindex19 - CH2_ActualVelocity */
} OBJ_STRUCT_PACKED_END
TOBJ6000;
#endif //#ifndef _XMC__ESC_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ6000 IN_GENERIC0x6000
#if defined(_XMC__ESC_) && (_XMC__ESC_ == 1)
={19,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x7000 : OUT_GENERIC
******************************************************************************/
/**
* \addtogroup 0x7000 0x7000 | OUT_GENERIC
* @{
* \brief Object 0x7000 (OUT_GENERIC) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Config<br>
* SubIndex 2 does not exists<br>
* SubIndex 3 - CH0_Mode<br>
* SubIndex 4 does not exists<br>
* SubIndex 5 - CH0_ProfilePosition<br>
* SubIndex 6 does not exists<br>
* SubIndex 7 - CH0_ProfileVelocity<br>
* SubIndex 8 does not exists<br>
* SubIndex 9 - CH0_ProfileACC<br>
* SubIndex 10 does not exists<br>
* SubIndex 11 - CH1_Mode<br>
* SubIndex 12 does not exists<br>
* SubIndex 13 - CH1_ProfilePosition<br>
* SubIndex 14 does not exists<br>
* SubIndex 15 - CH1_ProfileVelocity<br>
* SubIndex 16 does not exists<br>
* SubIndex 17 - CH1_ProfileACC<br>
* SubIndex 18 does not exists<br>
* SubIndex 19 - CH2_Mode<br>
* SubIndex 20 does not exists<br>
* SubIndex 21 - CH2_ProfilePosition<br>
* SubIndex 22 does not exists<br>
* SubIndex 23 - CH2_ProfileVelocity<br>
* SubIndex 24 does not exists<br>
* SubIndex 25 - CH2_ProfileACC<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x7000[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE }, /* Subindex1 - Config */
{ DEFTYPE_NULL , 0x00 , 0x0000 }, /* Subindex2 does not exists */
{ DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE }, /* Subindex3 - CH0_Mode */
{ DEFTYPE_NULL , 0x00 , 0x0000 }, /* Subindex4 does not exists */
{ DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE }, /* Subindex5 - CH0_ProfilePosition */
{ DEFTYPE_NULL , 0x00 , 0x0000 }, /* Subindex6 does not exists */
{ DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE }, /* Subindex7 - CH0_ProfileVelocity */
{ DEFTYPE_NULL , 0x00 , 0x0000 }, /* Subindex8 does not exists */
{ DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE }, /* Subindex9 - CH0_ProfileACC */
{ DEFTYPE_NULL , 0x00 , 0x0000 }, /* Subindex10 does not exists */
{ DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE }, /* Subindex11 - CH1_Mode */
{ DEFTYPE_NULL , 0x00 , 0x0000 }, /* Subindex12 does not exists */
{ DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE }, /* Subindex13 - CH1_ProfilePosition */
{ DEFTYPE_NULL , 0x00 , 0x0000 }, /* Subindex14 does not exists */
{ DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE }, /* Subindex15 - CH1_ProfileVelocity */
{ DEFTYPE_NULL , 0x00 , 0x0000 }, /* Subindex16 does not exists */
{ DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE }, /* Subindex17 - CH1_ProfileACC */
{ DEFTYPE_NULL , 0x00 , 0x0000 }, /* Subindex18 does not exists */
{ DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE }, /* Subindex19 - CH2_Mode */
{ DEFTYPE_NULL , 0x00 , 0x0000 }, /* Subindex20 does not exists */
{ DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE }, /* Subindex21 - CH2_ProfilePosition */
{ DEFTYPE_NULL , 0x00 , 0x0000 }, /* Subindex22 does not exists */
{ DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE }, /* Subindex23 - CH2_ProfileVelocity */
{ DEFTYPE_NULL , 0x00 , 0x0000 }, /* Subindex24 does not exists */
{ DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE }}; /* Subindex25 - CH2_ProfileACC */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x7000[] = "OUT_GENERIC\000"
"Config\000"
"\000"
"CH0_Mode\000"
"\000"
"CH0_ProfilePosition\000"
"\000"
"CH0_ProfileVelocity\000"
"\000"
"CH0_ProfileACC\000"
"\000"
"CH1_Mode\000"
"\000"
"CH1_ProfilePosition\000"
"\000"
"CH1_ProfileVelocity\000"
"\000"
"CH1_ProfileACC\000"
"\000"
"CH2_Mode\000"
"\000"
"CH2_ProfilePosition\000"
"\000"
"CH2_ProfileVelocity\000"
"\000"
"CH2_ProfileACC\000\377";
#endif //#ifdef _OBJD_

#ifndef _XMC__ESC_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
INT32 Config; /* Subindex1 - Config */
INT32 CH0_Mode; /* Subindex3 - CH0_Mode */
INT32 CH0_ProfilePosition; /* Subindex5 - CH0_ProfilePosition */
INT32 CH0_ProfileVelocity; /* Subindex7 - CH0_ProfileVelocity */
INT32 CH0_ProfileACC; /* Subindex9 - CH0_ProfileACC */
INT32 CH1_Mode; /* Subindex11 - CH1_Mode */
INT32 CH1_ProfilePosition; /* Subindex13 - CH1_ProfilePosition */
INT32 CH1_ProfileVelocity; /* Subindex15 - CH1_ProfileVelocity */
INT32 CH1_ProfileACC; /* Subindex17 - CH1_ProfileACC */
INT32 CH2_Mode; /* Subindex19 - CH2_Mode */
INT32 CH2_ProfilePosition; /* Subindex21 - CH2_ProfilePosition */
INT32 CH2_ProfileVelocity; /* Subindex23 - CH2_ProfileVelocity */
INT32 CH2_ProfileACC; /* Subindex25 - CH2_ProfileACC */
} OBJ_STRUCT_PACKED_END
TOBJ7000;
#endif //#ifndef _XMC__ESC_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ7000 OUT_GENERIC0x7000
#if defined(_XMC__ESC_) && (_XMC__ESC_ == 1)
={25,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0xF000 : Modular Device Profile
******************************************************************************/
/**
* \addtogroup 0xF000 0xF000 | Modular Device Profile
* @{
* \brief Object 0xF000 (Modular Device Profile) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Index distance <br>
* SubIndex 2 - Maximum number of modules <br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0xF000[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ }, /* Subindex1 - Index distance  */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ }}; /* Subindex2 - Maximum number of modules  */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0xF000[] = "Modular Device Profile\000"
"Index distance \000"
"Maximum number of modules \000\377";
#endif //#ifdef _OBJD_

#ifndef _XMC__ESC_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT16 IndexDistance; /* Subindex1 - Index distance  */
UINT16 MaximumNumberOfModules; /* Subindex2 - Maximum number of modules  */
} OBJ_STRUCT_PACKED_END
TOBJF000;
#endif //#ifndef _XMC__ESC_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJF000 ModularDeviceProfile0xF000
#if defined(_XMC__ESC_) && (_XMC__ESC_ == 1)
={2,0x0010,0}
#endif
;
/** @}*/







#ifdef _OBJD_
TOBJECT    OBJMEM ApplicationObjDic[] = {
/* Object 0x1600 */
{NULL , NULL ,  0x1600 , {DEFTYPE_PDOMAPPING , 13 | (OBJCODE_REC << 8)} , asEntryDesc0x1600 , aName0x1600 , &OUT_GENERICProcessDataMapping0x1600 , NULL , NULL , 0x0000 },
/* Object 0x1A00 */
{NULL , NULL ,  0x1A00 , {DEFTYPE_PDOMAPPING , 10 | (OBJCODE_REC << 8)} , asEntryDesc0x1A00 , aName0x1A00 , &IN_GENERICProcessDataMapping0x1A00 , NULL , NULL , 0x0000 },
/* Object 0x1C12 */
{NULL , NULL ,  0x1C12 , {DEFTYPE_UNSIGNED16 , 1 | (OBJCODE_ARR << 8)} , asEntryDesc0x1C12 , aName0x1C12 , &sRxPDOassign , NULL , NULL , 0x0000 },
/* Object 0x1C13 */
{NULL , NULL ,  0x1C13 , {DEFTYPE_UNSIGNED16 , 1 | (OBJCODE_ARR << 8)} , asEntryDesc0x1C13 , aName0x1C13 , &sTxPDOassign , NULL , NULL , 0x0000 },
/* Object 0x6000 */
{NULL , NULL ,  0x6000 , {DEFTYPE_RECORD , 19 | (OBJCODE_REC << 8)} , asEntryDesc0x6000 , aName0x6000 , &IN_GENERIC0x6000 , NULL , NULL , 0x0000 },
/* Object 0x7000 */
{NULL , NULL ,  0x7000 , {DEFTYPE_RECORD , 25 | (OBJCODE_REC << 8)} , asEntryDesc0x7000 , aName0x7000 , &OUT_GENERIC0x7000 , NULL , NULL , 0x0000 },
/* Object 0xF000 */
{NULL , NULL ,  0xF000 , {DEFTYPE_RECORD , 2 | (OBJCODE_REC << 8)} , asEntryDesc0xF000 , aName0xF000 , &ModularDeviceProfile0xF000 , NULL , NULL , 0x0000 },
{NULL,NULL, 0xFFFF, {0, 0}, NULL, NULL, NULL, NULL}};
#endif    //#ifdef _OBJD_
#undef PROTO

/** @}*/
#define _XMC__ESC_OBJECTS_H_
