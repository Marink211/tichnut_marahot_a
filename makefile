C=gcc
AR=ar
FLAGS=-Wall -g

all:maind mains 

mains:main.o libmyMath.a
	$(CC) $(FLAGS) -o progmains main.o libmyMath.a

maind: main.o libmyMath.so
	$(CC) $(FLAGS) -o progmaind main.o ./libmyMath.so

mymathd: power.o basicMath.o
	$(CC) -shared -o libmyMath.so power.o basicMath.o

mymaths: power.o basicMath.o
	$(AR) -rcs libmyMath.a power.o basicMath.o

main.o: main.c power.o basicMath.o
	$(CC) $(FLAGS) -c main.c power.c basicMath.c
myMath.h:power.c basicMath.c
	$(CC) $(FLAGS) -c myMath.h power.c basicMath.c
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c

basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c


.PHONY: clean

clean:
	rm -f *.o maind mains *.a *.so
