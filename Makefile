sc.o: sc.c
	gcc -c sc.c
sc: sc.o
	gcc sc.o -o sc
