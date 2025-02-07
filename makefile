COMPILER = g++
OBJS = horse.cpp race.cpp main.cpp
default: testcase
testcase: $(OBJS)
	$(COMPILER) -o file1 $(OBJS)
