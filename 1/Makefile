PROG = main.out

SRC = $(wildcard *.cc)
OBJ = $(SRC:.cc=.o)

all: $(PROG) | deps

$(PROG): $(OBJ)
	g++ -o $@ $^

$(OBJ): $(SRC)
	g++ -c $<

-include *.d

.PHONY: deps

deps:
	g++ -MM $(SRC)