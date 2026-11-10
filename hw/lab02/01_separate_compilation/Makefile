CXX = g++
CXXFLAGS = -Wall -Wextra
OBJS = obj/main.o obj/calc.o

.PHONY: all clean
all: calculator

calculator: $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

obj/%.o: %.cpp calc.h | obj
	$(CXX) $(CXXFLAGS) -c $< -o $@

obj:
	mkdir -p obj

clean:
	rm -rf obj calculator
