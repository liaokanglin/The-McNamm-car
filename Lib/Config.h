
#ifndef		__CONFIG_H
#define		__CONFIG_H

//========================================================================
//                               主时钟定义
//========================================================================

#define MAIN_Fosc		24000000L	//定义主时钟
//#define MAIN_Fosc		22118400L	//定义主时钟
//#define MAIN_Fosc		12000000L	//定义主时钟
//#define MAIN_Fosc		11059200L	//定义主时钟
//#define MAIN_Fosc		 5529600L	//定义主时钟

#define	NULL	0

//========================================================================
//                                头文件
//========================================================================

#include "STC8H.H"
#include "RTX51TNY.H"
#include <intrins.h>
#include <stdlib.h>
#include <stdio.h>

//========================================================================
//                               类型定义
//========================================================================

typedef unsigned char   u8;     //  8 bits 
typedef unsigned int    u16;    // 16 bits 
typedef unsigned long   u32;    // 32 bits 

typedef signed char     int8;   //  8 bits 
typedef signed int      int16;  // 16 bits 
typedef signed long     int32;  // 32 bits 

typedef unsigned char   uint8;  //  8 bits 
typedef unsigned int    uint16; // 16 bits 
typedef unsigned long   uint32; // 32 bits 

//===================================================

#define	TRUE	1
#define	FALSE	0

//===================================================

#define	Priority_0			0	//中断优先级为 0 级（最低级）
#define	Priority_1			1	//中断优先级为 1 级（较低级）
#define	Priority_2			2	//中断优先级为 2 级（较高级）
#define	Priority_3			3	//中断优先级为 3 级（最高级）

#define ENABLE		1
#define DISABLE		0

#define SUCCESS		0
#define FAIL		-1


//===================================================

#define	I2C_Mode_Master			1
#define	I2C_Mode_Slave			0

#define	PIE			0x20	//1: 比较结果由0变1, 产生上升沿中断
#define	NIE			0x10	//1: 比较结果由1变0, 产生下降沿中断

#define	PWMA	128
#define	PWMB	129

#define	FALLING_EDGE		1		//产生下降沿中断
#define	RISING_EDGE			2		//产生上升沿中断
//===================================================


//========================================================================
//                             外部函数和变量声明
//========================================================================

#endif