/* ** por compatibilidad se omiten tildes **
================================================================================
 TRABAJO PRACTICO 3 - System Programming - ORGANIZACION DE COMPUTADOR II - FCEN
================================================================================

    Definiciones globales del sistema.
*/

#ifndef __DEFINES_H__
#define __DEFINES_H__

/* Bool */
/* -------------------------------------------------------------------------- */
#define TRUE                    0x00000001
#define FALSE                   0x00000000
#define ERROR                   1


/* Misc */
/* -------------------------------------------------------------------------- */
#define CANT_H                 15
#define CANT                    5
#define SIZE_W                  80
#define SIZE_H                  44


/* Indices en la gdt */
/* -------------------------------------------------------------------------- */
#define GDT_COUNT 66 
// 9 iniciales + tss idle + tss inicial + 20 por jugador + 15 sanas

#define GDT_IDX_NULL_DESC           0
#define GDT_IDX_KERN_CODE           4
#define GDT_IDX_KERN_DATA           5
#define GDT_IDX_USER_CODE           6
#define GDT_IDX_USER_DATA           7
#define GDT_IDX_VIDEO               8
#define GDT_IDX_TSS_INICIAL			9
#define GDT_IDX_TSS_IDLE            10

/* Offsets en la gdt */
/* -------------------------------------------------------------------------- */
#define GDT_OFF_NULL_DESC           (GDT_IDX_NULL_DESC      << 3)

/* Direcciones de memoria */
/* -------------------------------------------------------------------------- */
#define VIDEO_SCREEN            0x000B8000 /* direccion fisica del buffer de video */
#define PAGE_SIZE 				0X1000
#define INICIO_PAGINAS_LIBRES 	0x100000
#define TASK_CODE 				0x8000000
#define PAGE_DIRECTORY_KERN 	0X27000
#define PAGE_TABLE_KERN 		0X28000
#define IDLE_TASK 				0X10000
#define STACK_BASE_KERN 		0X27000
#endif  /* !__DEFINES_H__ */
