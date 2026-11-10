CXX = g++
CXXFLAGS = -Wall -Wextra -MMD -MP
SRCS = $(wildcard *.cpp)
OBJS = $(patsubst %.cpp,obj/%.o,$(SRCS))
DEPS = $(OBJS:.o=.d)

.PHONY: all clean
all: calculator

calculator: $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

obj/%.o: %.cpp | obj
	$(CXX) $(CXXFLAGS) -c $< -o $@

obj:
	mkdir -p obj

-include $(DEPS)

clean:
	rm -rf obj calculator
