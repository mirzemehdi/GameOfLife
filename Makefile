CC = gcc

all: gameoflife clean


%.o: %.c
	$(CC) -c $< 

gameoflife: cell.o arena.o cellList.o cellTable.o game.o main.o
	$(CC)  $^ -o $@

clean: 
	rm -f *.o