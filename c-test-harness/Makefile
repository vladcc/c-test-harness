CC := gcc
CFLAGS := -Wall -g
VPATH := ./test_proj_one ./test_proj_two
TEST := test
PROJ := proj
TPRJ := $(TEST)_proj
OBJ_DIR := ./obj
OBJ := $(addprefix $(OBJ_DIR)/,\
$(TEST)_all.o $(PROJ)_one.o $(PROJ)_two.o $(TPRJ)_one.o $(TPRJ)_two.o)
BIN := test.bin

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) $(OBJ) -o $(BIN) $(CFLAGS)
	cp -v test.h ./boilerplate/test.h
	
$(OBJ_DIR)/%.o: %.c
	$(CC) -c $< -o $@ $(CFLAGS)

$(OBJ): test.h

.PHONY: clean
clean:
	-rm ./obj/*.o *.bin
