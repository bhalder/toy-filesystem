MODULE_NAME=toyk
OUTPUT_NAME=$(MODULE_NAME).ko
obj-m += $(MODULE_NAME).o
ccflags-y = -std=gnu99

all:
	make -C /lib/modules/$(shell uname -r)/build M=`pwd` modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=`pwd` clean
