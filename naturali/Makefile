
iniz_naturali: iniz_naturali.o naturali.o Makefile
	gcc -ansi -Wall -O iniz_naturali.o naturali.o -o iniz_naturali

iniz_naturali.o: iniz_naturali.c naturali.c naturali.h Makefile
	gcc -ansi -Wall -O -c iniz_naturali.c

naturali.o: naturali.o Makefile
	gcc -ansi -Wall -O -c naturali.c

# pulizia dagli eventuali file oggetto e file eseguibile
pulisci_tutto:
	rm -f *.o
