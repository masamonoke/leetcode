EXE ?= ""

run:
ifeq ($(suffix $(EXE)), .cpp)
	g++ $(EXE) -std=c++20
endif
