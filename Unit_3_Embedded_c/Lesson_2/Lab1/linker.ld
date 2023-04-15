ENTRY(reset)
/* Memory Sections*/
MEMORY{
	Mem (rwx) : ORIGIN = 0x00000000 , LENGTH = 64M
}
/*detials of sections */
SECTIONS
{
	. = 0x10000;
	.startup . :
	{
		startup.o(.text)
	}>Mem
	.text :
	{
		*(.text) *(.rodata)
	}>Mem
	.data :
	{
		*(.data)
	}>Mem
	.bss :
	{
		*(.bss)*(COMMON)
	}>Mem
	. = . + 0x1000 ;	/*Set size of the stack to 4kb*/
	stack_top = .;		/*Set pointer to top of stack */
}