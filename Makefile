# Send questions to Glen Alan MacLachlan
# maclach@gwu.edu

CC=gcc
CXX=g++
CFLAGS=  -Wall -g -ansi -std=c99
CMATH= -lm
INCLUDE=-I ./include
SRC=src
OBJECTS= usage.o get_data.o 
BIN=bin
EXE=test_read


# First macro is the default. 
all: usage get_data $(EXE) clean_objects

get_data:
	$(CC) $(CFLAGS) $(INCLUDE) $(SRC)/get_data.c -c

$(EXE):
	$(CC) $(CFLAGS) $(INCLUDE) $(OBJECTS) $(SRC)/$(EXE).c -o $(BIN)/$(EXE) $(CMATH)
 
usage: 
	$(CC) $(CFLAGS) $(INCLUDE) $(SRC)/usage.c -c

install: 
	install -c $(EXE) /usr/local/bin
	

clean: 
	rm $(BIN)/$(EXE)  

clean_objects:
	rm $(OBJECTS)
