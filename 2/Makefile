CPPFLAGS = -std=c++11 -MD -MP 

SRC = $(wildcard *.cc) $(wildcard ../Utils/*.cc)

all: main.out

main.out: $(SRC:%.cc=%.o)
	g++ $(CPPFLAGS) -o $@ $^

-include $(SRC:%.cc=%.d)