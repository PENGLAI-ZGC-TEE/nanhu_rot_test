# NAME := aes_functest
# SRCS := $(shell find -L ./src/ -name "$(NAME).[cS]")

NAME := hmac_sha256_functest
SRC_DIR := ./src/
# 查找所有的 C 和 S 源文件
ALL_SRCS := $(shell find -L $(SRC_DIR) -name "*.[cS]")

# 筛选出不包含 test_main 函数的文件
NO_TEST_MAIN_SRCS := $(shell grep -Lr "test_main" $(ALL_SRCS))

# 包含 test_main 函数且文件名为 NAME 的源文件
TEST_MAIN_SRCS := $(firstword $(shell find -L $(SRC_DIR) -name "$(NAME).[cS]" | xargs grep -lr "test_main"))

# 合并 TEST_MAIN_SRCS 和 NO_TEST_MAIN_SRCS
SRCS := $(NO_TEST_MAIN_SRCS) $(TEST_MAIN_SRCS)

# 用于存放原文件备份的目录
BACKUP_DIR := ./backup/


# 包含文件的逻辑在这里执行
include ./Makefile.app

# 用于重命名函数 test_main 为 main 的逻辑
rename_test_main_to_main:
	@echo "Renaming test_main to main in files: $(TEST_MAIN_SRCS)"
	@mkdir -p $(BACKUP_DIR)
	@for file in $(TEST_MAIN_SRCS); do \
		cp $$file $(BACKUP_DIR); \
		sed -i 's/test_main/main/g' $$file; \
		echo "Renamed test_main to main in $$file"; \
	done

# 恢复函数 main 为 test_main
restore_main_to_test_main:
	@echo "Restoring main to test_main in files: $(TEST_MAIN_SRCS)"
	@for file in $(TEST_MAIN_SRCS); do \
		cp $(BACKUP_DIR)$$file $$file; \
		echo "Restored main to test_main in $$file"; \
	done

# 添加编译前后的逻辑
all: rename_test_main_to_main compile restore_main_to_test_main

# 编译逻辑
compile:
	@echo "Compiling the project with renamed main functions."
	@$(MAKE) ARCH=riscv64-xs -j8

# include $(AM_HOME)/Makefile.app
# include ./Makefile.app
