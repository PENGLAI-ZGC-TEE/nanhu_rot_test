NAME := csrng_smoketest
SRCS := $(shell find -L ./src/ -name "*.[cS]")

# include $(AM_HOME)/Makefile.app
include ./Makefile.app
