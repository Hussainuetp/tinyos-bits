COMPONENT=ledgridAppC
TOSMAKE_PRE_EXE_DEPS += CharSerial.class
TOSMAKE_CLEAN_EXTRA = *.class CharMessage.java

CharSerial.class: $(wildcard *.java) CharSerial.java
	javac -target 1.4 -source 1.4 *.java

CharMessage.java:
	nescc-mig java $(CFLAGS) -java-classname=CharSerial led_grid.h ledgrid_serial_msg -o $@

TINYOS_ROOT_DIR?=../..
include $(TINYOS_ROOT_DIR)/Makefile.include

