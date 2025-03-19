@CHCP 1251>NUL
gcc -Wall -E main.c -o main.i
gcc -Wall -S main.i -o main.s
gcc -Wall -g3 -c main.c
gcc -Wall main.o -o myprog18