PROG = main.out

SRC = $(wildcard *.cc)
OBJ = $(SRC:.cc=.o)

all: $(PROG)

$(PROG): $(OBJ)
	g++ -o $@ $^

$(OBJ): $(SRC)
	g++ -c $<