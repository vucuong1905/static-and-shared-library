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
	gcc -c -fPIC $(SRC_DIR)/helloCuong.c -o $(OBJ_DIR)/helloCuong.o -I $(INC_DIR)
	gcc -c -fPIC $(SRC_DIR)/helloWorld.c -o $(OBJ_DIR)/helloWorld.o -I $(INC_DIR)
	gcc -c -fPIC $(SRC_DIR)/main.c -o $(OBJ_DIR)/main.o -I $(INC_DIR) 

create_libs: 
	gcc -shared $(OBJ_DIR)/helloCuong.o $(OBJ_DIR)/helloWorld.o -o $(LIB_DIR_SHARED)/libhello.so

all: create_objs create_libs
	gcc $(OBJ_DIR)/main.o -L$(LIB_DIR_SHARED) -lhello -o $(BIN_DIR)/used-shared-memory 

clean: 
	rm -f $(OBJ_DIR)/*.o
	rm -f $(BIN_DIR)/used-shared-memory
	rm -f $(LIB_DIR_SHARED)/*.so
