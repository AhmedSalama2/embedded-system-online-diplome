/***
 ======================================================================================================================
 ** Created on     : Sat, April 22, 2023
 ** Author         : Ahmed Salama
 ** Project_Name   : Startup.c
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/

#include "Platform_types.h"
extern int main(void);


void Reset_Hundler(void);

void Default_Hundler(void){
    Reset_Hundler ();
}

void NMI_Handler(void)              __attribute__ ((weak, alias("Default_Hundler")));;
void H_Fault_Handler(void)          __attribute__ ((weak, alias("Default_Hundler")));;
void MM_Fault_Handler(void)         __attribute__ ((weak, alias("Default_Hundler")));;
void Bus_Fault(void)                __attribute__ ((weak, alias("Default_Hundler")));;
void Usage_Fault_Handler(void)      __attribute__ ((weak, alias("Default_Hundler")));;

static uint32 stack_top[256]; /*Size of Stack*/

void (*const g_P_fn_vector [])(void) __attribute__((section(".vectors")))={
    (void(*)())    ((uint32)stack_top+sizeof(stack_top)),
    (void(*)())    &Reset_Hundler,
    (void(*)())    &NMI_Handler,
    (void(*)())    &H_Fault_Handler,
    (void(*)())    &MM_Fault_Handler,
    (void(*)())    &Bus_Fault,
    (void(*)())    &Usage_Fault_Handler
};

/*Start and End of Sections*/
extern uint32    E_TEXT ;
extern uint32    S_DATA ;
extern uint32    E_DATA ;
extern uint32    S_BSS ;
extern uint32    E_BSS ;
void Reset_Hundler(void){
    /*calculate size of data_section*/
    uint32 Data_Size =(uint8*)&E_DATA - (uint8*)&S_DATA;
    uint8* P_src=(uint8*)&E_TEXT;
    uint8* P_dst=(uint8*)&S_DATA;
    uint32 i;
    /*copy data fron rom to ram */
    for(i=0;i<Data_Size;i++){
        *((uint8*)P_dst++)=*((uint8*)P_src++);
    }
    /*calculate size of bss_section*/
    uint32 BSS_Size =(uint8*)&E_BSS- (uint8*)&S_BSS;
    uint8* P_dstb=(uint8*)&S_BSS;
    /*set bss to 0*/
    for(i=0;i<BSS_Size;i++){
        *((uint8*)P_dstb++)=(uint8)0;
    }
    main ();
}

