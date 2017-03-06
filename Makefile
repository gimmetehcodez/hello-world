OBJ := hello.o
CC := gcc
CFLAGS := -g -Wall

EXECUTABLE := hello

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(EXECUTABLE)

clean:
	rm $(OBJ)

reset:
	rm $(OBJ) $(EXECUTABLE)
