CC = gcc
AR = ar -rcs
FLAGS = -Wall

all: mymaths mymathd mains maind
mymathd:libmyMath.a
mymaths:libmyMath.so

libmyMath.so:basicMath.o power.o
	$(CC)	-shared -o libmyMath.so basicMath.o power.o

libmyMath.a:basicMath.o power.o
	$(AR)	-rcs libmyMath.a basicMath.o power.o

mains:main.o libmyMath.a
	$(CC) $(FLAGS) -o mains main.o libmyMath.a
	
maind:main.o libmyMath.so
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so
	
		
basicMath.o:basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c
	
	
power.o:power.c myMath.h
	$(CC) $(FLAGS) -c power.c

		
main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c
	
clean:
	rm -f *.o *.a *.so mains maind
	
.PHONY: clean all 
