# LinuxKernel
some develop about linux kernel

01 hello
```Shell
uname -a

Makefile
----------------------------
obj-m += hello.o

all:
        make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean:
        make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

----------------------------

---------- mount and unmount command
sudo insmod
sudo rmmod

demsg -> show logs.

lsmod

ready dev env.
apk install vim

ln -s src obj

find out the header src path and make soft link to there.

sudo modprobe industrialio

------------- cp path to new path
cp -r ./01_hello ./03_read_write

```






