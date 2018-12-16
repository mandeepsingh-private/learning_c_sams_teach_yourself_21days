#make file - this is a comment section
CC=gcc  #compiler for c
TARGET=main#target file name
FILE=RomeoJuliet.txt

All:Test

Clean:
	rm $(TARGET)

Compile:
	$(CC) -o $(TARGET) $(TARGET).cpp

# define test dependency on Compile to succeed
Test: $(TARGET)
	./$(TARGET) $(FILE)