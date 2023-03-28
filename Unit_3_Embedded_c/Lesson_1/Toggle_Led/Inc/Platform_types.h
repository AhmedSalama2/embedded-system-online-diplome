/***
 ======================================================================================================================
 ** Created on     : Mon, Mar 27, 2023
 ** Author         : Ahmed Salama
 ** Project_Name   : PlatformTypes
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/
/*define True or false */
#define true	 1
#define false	 1

#ifndef   PLATFORMTYPES_H_
#define   PLATFORMTYPES_H_

/*Symbols*/
#define CPU_TYPE CPU_	TYPE_32
#define CPU_BIT_ORDER 	MSB_FIRST
#define CPU_BYTE_ORDER 	HIGH_BYTE_FIRST

/*define _Bool*/
#ifndef _Bool
#define _Bool unsigned char
#endif

/*Types*/
typedef _Bool boolean;
typedef signed char sint8;
typedef unsigned char uint8;
typedef signed short sint16;
typedef unsigned short uint16;
typedef signed long sint32;
typedef signed long long sint64;
typedef unsigned long uint32;
typedef unsigned long long uint64;
typedef unsigned long uint8_least;
typedef unsigned long uint16_least;
typedef unsigned long uint32_least;
typedef signed long sint8_least;
typedef signed long sint16_least;
typedef signed long sint32_least;
typedef float float32;
typedef double float64;
typedef volatile signed char vsint8;
typedef volatile unsigned char vuint8;
typedef volatile signed short vsint16;
typedef volatile unsigned short vuint16;
typedef volatile signed long vsint32;
typedef volatile signed long long vsint64;
typedef volatile unsigned long vuint32;

/*define False */
#ifndef FALSE
#define FALSE (boolean)false
#endif
/*define True */
#ifndef TRUE
#define TRUE (boolean)true
#endif

#endif /* PLATFORMTYPES_H_ */
