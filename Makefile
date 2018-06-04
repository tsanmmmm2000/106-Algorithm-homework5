scp.o: scp.c
	gcc -c scp.c
scp: scp.o
	gcc scp.o -o scp
