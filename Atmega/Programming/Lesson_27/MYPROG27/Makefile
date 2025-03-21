CC = gcc

all:	main.o ariph.o utils.o
	$(CC) -o myprog27.exe main.o ariph.o utils.o

main.o:	src/main.c inc/main.h inc/ariph.h inc/utils.h
	$(CC) -Iinc -O0 -g3 -Wall -c src/main.c
	$(CC) -Iinc -masm=intel -g3 -Wall -c src/main.c -S

ariph.o: src/ariph.c inc/ariph.h
	$(CC) -Iinc -O0 -g3 -Wall -c src/ariph.c
	$(CC) -Iinc -masm=intel -g3 -Wall -c src/ariph.c -S

utils.o:	src/utils.c inc/utils.h
	$(CC) -Iinc -O0 -g3 -Wall -c src/utils.c
	$(CC) -Iinc -masm=intel -g3 -Wall -c src/utils.c -S

clean:
	del -rf *.s *.o *.exe
