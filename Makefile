# NAME := aes_functest
# SRCS := $(shell find -L ./src/ -name "$(NAME).[cS]")

NAME := kmac_app_rom_test
SRC_DIR := ./src/
# 查找所有的 C 和 S 源文件
ALL_SRCS := $(shell find -L $(SRC_DIR) -name "*.[cS]")

# 筛选出不包含 test_main 函数的文件
NO_TEST_MAIN_SRCS := $(shell grep -Lr "test_main" $(ALL_SRCS))

# 包含 test_main 函数且文件名为 NAME 的源文件
TEST_MAIN_SRCS := $(firstword $(shell find -L $(SRC_DIR) -name "$(NAME).[cS]" | xargs grep -lr "test_main"))

# 合并 TEST_MAIN_SRCS 和 NO_TEST_MAIN_SRCS
SRCS := $(NO_TEST_MAIN_SRCS) $(TEST_MAIN_SRCS)



# 包含文件的逻辑在这里执行
include ./Makefile.app

# 用于重命名函数 test_main 为 main 的逻辑
rename_test_main_to_main:
	@echo "Renaming test_main to main in files: $(TEST_MAIN_SRCS)"
	@for file in $(TEST_MAIN_SRCS); do \
		sed -i 's/bool test_main/bool main/g' $$file; \
		sed -i 's/return true/return 0/g' $$file; \
		echo "Renamed test_main to main in $$file"; \
	done

# 恢复函数 main 为 test_main
restore_main_to_test_main:
	@echo "Restoring main to test_main in files: $(TEST_MAIN_SRCS)"
	@for file in $(TEST_MAIN_SRCS); do \
		sed -i 's/bool main/bool test_main/g' $$file; \
		echo "Restored main to test_main in $$file"; \
	done

# 添加编译前后的逻辑
ram_sim: rename_test_main_to_main compile_ram_sim restore_main_to_test_main
flash_sim: rename_test_main_to_main compile_flash_sim restore_main_to_test_main
rom_sim: rename_test_main_to_main compile_rom_sim restore_main_to_test_main

# 编译逻辑
compile_ram_sim:
	@echo "Compiling the project with renamed main functions for sram sim."
	@$(MAKE) ARCH=riscv64-xs -j8

compile_flash_sim:
	@echo "Compiling the project with renamed main functions for flash sim."
	@$(MAKE) ARCH=riscv64-xs-flash -j8

compile_rom_sim:
	@echo "Compiling the project with renamed main functions for bootrom."
	@echo "Change reset_vector_addr to ROM."      
	@sed -i 's/FLASH (rxa) : ORIGIN = 0x10000000/FLASH (rxa) : ORIGIN = 0x3b200000/g' ../../am/src/nemu/isa/riscv/boot/loaderflash.ld
	@$(MAKE) ARCH=riscv64-xs-flash -j8            
	@echo "Restore reset_vector_addr to SRAM."      
	@sed -i 's/FLASH (rxa) : ORIGIN = 0x3b200000/FLASH (rxa) : ORIGIN = 0x10000000/g' ../../am/src/nemu/isa/riscv/boot/loaderflash.ld 

# include $(AM_HOME)/Makefile.app
# include ./Makefile.app
