obj-m += hello.o

# KDIR ka path hum variable se lenge jo GitHub Action pass karega
KDIR ?= $(KERNEL_SRC)

all:
	$(MAKE) -C $(KDIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean
