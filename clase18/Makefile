#Compilador y opciones 
CC = gcc
CFLAGS = -Wall
LDFLAGS = -lpng

SRC_DIR  = src 
OBJ_DIR = obj 
BIN_DIR = bin 

SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(patsubst $(SRC_DIR)/%.c , $(OBJ_DIR)/%.o , $(SRCS))
TARGET = $( BIN_DIR)/myprogram

#Definicion del target (nombre del archivo ejecutable)
my program: Myprogram 
	$(CC) $(CFLAGS) -o myprogram rotate.c -lpng 

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@
