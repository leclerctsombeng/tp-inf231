exe : main.o tableau.o
	gcc -o exe main.o tableau.o
main.o : main.c tableau.c
	gcc -c main.c
tableau.o : tableau.c entete.h
	gcc -c tableau.c
clean:
	rm -f *.o
