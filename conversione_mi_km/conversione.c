/******************************************************************/
/* programma per convertire miglia in chilometri (versione batch) */
/******************************************************************/
/*****************************/
/* inclusione delle librerie */
/*****************************/
#include <stdio.h>
/*****************************************/
/* definizione delle costanti simboliche */
/*****************************************/
#define KM_PER_MI 1.609 /* fattore di conversione miglia-chilometri */
/***********************************/
/* definizione della funzione main */
/***********************************/
int main(void)
{
	/* dichiarazione delle variabili locali alla funzione */
	FILE *file_miglia; /* input: file contenente la distanza in miglia */
	double miglia; /* input: distanza in miglia */
	FILE *file_chilometri; /* output: file contenente la distanza in chilometri */
	double chilometri; /* output: distanza in chilometri */
	
	/* aprire i file */
	file_miglia = fopen("miglia.txt",
	"r");
	
	file_chilometri = fopen("chilometri.txt",
	"w");
	
	/* acquisire la distanza in miglia */
	fscanf(file_miglia,
	"%lf",
	&miglia);
	
	/* convertire la distanza in chilometri */
	chilometri = miglia * KM_PER_MI;
	
	/* comunicare la distanza in chilometri */
	fprintf(file_chilometri, "La stessa distanza in chilometri e’: %f\n", chilometri);
	
	/* chiudere i file */
	fclose(file_miglia);
	fclose(file_chilometri);
	
return(0);
}
