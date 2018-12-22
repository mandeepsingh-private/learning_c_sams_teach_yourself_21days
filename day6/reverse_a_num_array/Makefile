#make file - this is a comment section
CC=gcc  #compiler for c
TARGET=main#target file name


all:run

clean:
	rm $(TARGET)

compile:
	$(CC) -o $(TARGET) $(TARGET).c

# define test dependency on Compile to succeed
run: $(TARGET)
	./$(TARGET)