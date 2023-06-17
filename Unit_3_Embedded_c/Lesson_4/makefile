CC=arm-none-eabi-
CFLAGS= -mthumb -mcpu=cortex-m4 -gdwarf-2 
INCS= -I .
LIBS=

SRC=$(wildcard *.c)
OBJ= $(SRC:.c=.o)

AS=$(wildcard *.s)
ASOBJ=$(AS:.s=.o)

project_name=lesson4_Lab_3

all:$(project_name).bin
	
$(project_name).bin: $(project_name).elf
	$(CC)objcopy.exe -O binary $< $@
%.o: %.c
	$(CC)gcc.exe $(CFLAGS) $(INCS) -c $< -o $@
%.o:%.s 
	$(CC)as.exe    $(CFLAGS) $< -o $@
$(project_name).elf: $(OBJ) $(ASOBJ)
	$(CC)ld.exe  -T  $(LIBS) linker.ld $(OBJ) $(ASOBJ) -o $@ -Map=Map_file.map
	cp $(project_name).elf   $(project_name).axf 
clean : 
	rm *.o *.bin 
clean_all: 
	rm *.o *.bin *.elf