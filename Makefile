ARMGNU ?= arm-none-eabi

CPPFLAGS =
CFLAGS = -Wall -O0 -g -nostdlib -nostartfiles -ffreestanding -std=c99
LDFLAGS  =
LIBS =

.PHONY : all clean

.SUFFIXES : 
.SUFFIXES : .c .s .o .exe .bin .list

NAME = rpn 

all : $(NAME).bin 

$(NAME).exe: start.o
	$(ARMGNU)-ld $(LDFLAGS) -T memmap $^ -o rpn.exe 
	$(ARMGNU)-objdump -D $@ > $*.exe.list

.s.o:
	$(ARMGNU)-as $(ASFLAGS) $< -o $@ 

.c.o:
	$(ARMGNU)-gcc $(CPPFLAGS) $(CFLAGS) -c rpn.o

.exe.bin:
	$(ARMGNU)-objcopy $< -O binary $@

clean :
	rm -f *.o
	rm -f *.exe
	rm -f *.bin
	rm -f *.list

install: $(NAME).bin
	rpi-install.py /dev/ttyUSB0 $(NAME).bin
	screen /dev/ttyUSB0 115200
