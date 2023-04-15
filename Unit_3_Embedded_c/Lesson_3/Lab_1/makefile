CC=arm-none-eabi-
CFLAGS=-mcpu=arm926ej-s -g
INCS= -I .
LIBS=
SRC=$(wildcard *.c)
OBJ= $(SRC:.c=.o)
AS=$(wildcard *.s)
ASOBJ=$(AS:.s=.o)
all:project.bin
	
project.bin: project.elf
	$(CC)objcopy.exe -O binary $< $@
%.o:%.c
	$(CC)gcc.exe -c $(INCS)  $(CFLAGS)  $< -o $@
%.o:%.s 
	$(CC)as.exe $(CFLAGS) $< -o $@
project.elf: $(OBJ) $(ASOBJ)
	$(CC)ld.exe  -T  $(LIBS) linker.ld  $(ASOBJ) -o $@ -Map=Map_file.map
clean : 
	rm *.o *.bin 
clean_all: 
	rm *.o *.bin *.elf

