CUR_DIR := .
BIN_DIR := $(CUR_DIR)/bin
SRC_DIR := $(CUR_DIR)/src
OBJ_DIR := $(CUR_DIR)/obj
INC_DIR := $(CUR_DIR)/inc
LIB_DIR := $(CUR_DIR)/lib
LIB_DIR_STATIC := $(LIB_DIR)/static
LIB_DIR_SHARED := $(LIB_DIR)/shared

C_FLAGS = -I $(INC_DIR)

create_objs: 
	gcc -c $(SRC_DIR)/mymath.c -o $(OBJ_DIR)/mymath.o $(C_FLAGS)
	gcc -c $(SRC_DIR)/main.c -o $(OBJ_DIR)/main.o $(C_FLAGS)

create_static_libs: create_objs
	ar rcs $(LIB_DIR_STATIC)/libmymath.a $(OBJ_DIR)/mymath.o

all: create_static_libs
	gcc $(OBJ_DIR)/main.o $(LIB_DIR_STATIC)/libmymath.a -o $(BIN_DIR)/used-static-library

clean: 
	rm -f $(OBJ_DIR)/*.o
	rm -f $(BIN_DIR)/used-static-library
	rm -f $(LIB_DIR_STATIC)/*.a
