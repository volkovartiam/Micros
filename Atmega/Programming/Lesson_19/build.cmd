@CHCP 1251>NUL
gcc -Wall -E main.c -o main.i
gcc -Wall -E ariph.c -o ariph.i
gcc -Wall -E utils.c -o utils.i
gcc -Wall -S main.i -o main.s
gcc -Wall -S ariph.i -o ariph.s
gcc -Wall -S utils.i -o utils.s
gcc -Wall -g3 -c main.c
gcc -Wall -g3 -c ariph.c
gcc -Wall -g3 -c utils.c
gcc -Wall main.o ariph.o utils.o -o myprog19