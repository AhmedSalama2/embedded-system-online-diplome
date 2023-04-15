/***
 ======================================================================================================================
 ** Created on     : Mon, April 10, 2023
 ** Author         : Ahmed Salama
 ** Project_Name   : Lab2_linker
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/
 MEMORY{
    flash(RX) :  ORIGIN = 0X08000000   , LENGTH = 128K
    sram(RWX) :  ORIGIN = 0X20000000   , LENGTH = 20K
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
    . = . + 0x1000;
    _stack_top = .;

 }