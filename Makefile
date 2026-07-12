
MOD_NAME := onic
ONIC_DRV_HOME := $(shell pwd)
ONIC_DRV_KVER := $(shell uname -r)

SRC_FOLDERS = . libqdma/qdma_access libqdma \
              libqdma/qdma_access/qdma_soft_access \
              libqdma/qdma_access/eqdma_soft_access \
              libqdma/qdma_access/qdma_s80_hard_access \
			  jsmn 

ONIC_DIR := $(src)
ifeq ($(ONIC_DIR),)
    ONIC_DIR := $(SUBDIRS)
endif
ifeq ($(ONIC_DIR),)
    ONIC_DIR := $(M)
endif
ifeq ($(ONIC_DIR),)
    ONIC_DIR := $(shell pwd)
endif

ONIC_OBJS_RAW = $(foreach CURR, $(SRC_FOLDERS), $(patsubst $(ONIC_DIR)/$(CURR)/%.c, $(CURR)/%.o, $(wildcard $(ONIC_DIR)/$(CURR)/*.c)))
ONIC_OBJS = $(patsubst ./%, %, $(ONIC_OBJS_RAW))
EXTRA_CFLAGS = $(foreach CURR, $(SRC_FOLDERS), -I$(ONIC_DIR)/$(CURR))

EXTRA_CFLAGS += -DMBOX_INTERRUPT_DISABLE
#CFLAGS_./onic_main.o := -DDEBUG

obj-m += $(MOD_NAME).o
$(MOD_NAME)-objs += $(ONIC_OBJS)

ccflags-y := -Wall $(EXTRA_CFLAGS)

all:
	make -C /lib/modules/$(ONIC_DRV_KVER)/build M=$(ONIC_DRV_HOME) SUBDIRS=$(shell pwd) modules

clean:
	make -C /lib/modules/$(ONIC_DRV_KVER)/build M=$(ONIC_DRV_HOME) SUBDIRS=$(shell pwd) clean
	rm -f libqdma/*.o.ur-safe *.o.ur-safe

install:
	install -d ${MODULES_INSTALL_PATH}
	install -t ${MODULES_INSTALL_PATH} $(MOD_NAME).ko

json_install:
	install -d /lib/firmware/xilinx/
	install -m 644 json/*.json /lib/firmware/xilinx/

print-objs:
	@echo "ONIC_OBJS = $(ONIC_OBJS)"
