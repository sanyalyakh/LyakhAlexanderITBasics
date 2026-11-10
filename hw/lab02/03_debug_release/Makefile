CXX = g++
MODE ?= release
CXXFLAGS = -Wall -Wextra
ifeq ($(MODE),debug)
CXXFLAGS += -g -O0
else ifeq ($(MODE),release)
CXXFLAGS += -O3
else
$(error Unsupported MODE: $(MODE))
endif

OBJS = $(patsubst %.cpp,obj/$(MODE)/%.o,$(wildcard *.cpp))

.PHONY: all clean
all: calculator

calculator: $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

obj/$(MODE)/%.o: %.cpp calc.h
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf obj calculator
