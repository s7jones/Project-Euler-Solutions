PROG = main.out

CC_FLAGS = -std=c++11

SRC = $(wildcard *.cc)
OBJ = $(SRC:.cc=.o)

all: $(PROG)

$(PROG): $(OBJ)
	g++ -o $@ $^

$(OBJ): $(SRC)
	g++ -c $(CC_FLAGS) $<