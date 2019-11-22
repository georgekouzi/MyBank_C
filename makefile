
all : compile run clean

compile:
	gcc -Wall -g -o main.o main.c myBank.c
run:
	./main.o
myBank.o:
	gcc -Wall -g -o myBank.o myBank.c
clean:
	rm -f *.o 