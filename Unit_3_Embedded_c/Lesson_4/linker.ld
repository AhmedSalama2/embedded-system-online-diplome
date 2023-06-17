/***
 ======================================================================================================================
 ** Created on     : Sat, April 22, 2023
 ** Author         : Ahmed Salama
 ** Project_Name   : Lab1_linker_tiva_c
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/
 MEMORY{
    flash(RX) :  ORIGIN = 0X00000000   , LENGTH = 512M  /*0.5GB*/
    sram(RWX) :  ORIGIN = 0X20000000   , LENGTH = 512M  /*0.5GB*/
 }

 SECTIONS{
    .text :{
        *(.vectors*)
        *(.text*)
		*(.rodata*)
		. = ALIGN(4);
		E_TEXT = .;
    }>flash
	
	.data : {
		S_DATA = . ;
		*(.data*)
		. = ALIGN(4);
		E_DATA = . ;
	}>sram AT>flash
	
    .bss :{
		S_BSS = .;
        *(.bss*)
		. = ALIGN(4);
		E_BSS = .;
    }>sram
 }