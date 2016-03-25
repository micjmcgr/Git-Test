#Author: Michael J. McGrath
#File name: Makefile
#Date last modified: March 25, 2016
#Purpose: Makefile used in the git tutorial

#Compiler
CC = g++
#Target
TARGET = main
#Compile with all errors and warnings
CFLAGS = -c -Wall

all: $(TARGET)

$(TARGET): $(TARGET).o
	$(CC) $(TARGET).o -o $(TARGET)

$(TARGET).o: $(TARGET).cpp
	$(CC) $(TARGET).cpp $(CFLAGS)

clean:
	rm $(TARGET) *.o *~
