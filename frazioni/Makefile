
prova_lib_frazioni: prova_lib_frazioni.o frazioni.o Makefile
	gcc -ansi -Wall -O prova_lib_frazioni.o frazioni.o -o prova_lib_frazioni

prova_lib_frazioni.o: prova_lib_frazioni.c frazioni.c frazioni.h Makefile
	gcc -ansi -Wall -O -c prova_lib_frazioni.c

/*frazioni.o: frazioni.o Makefile
	gcc -ansi -Wall -O -c frazioni.c*/

# pulizia dagli eventuali file oggetto e file eseguibile
pulisci_tutto:
	rm -f *.o
