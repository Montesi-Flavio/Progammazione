/************************************************************************/
/* programma per convertire miglia in chilometri (versione interattiva) */
/************************************************************************/


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
	
	FILE *file_miglia;		 /* input: file contenente la distanza in miglia */

	double miglia;		 	 /* input: distanza in miglia */

	FILE *file_chilometri;  	 /* output: file contenente la distanza in chilometri */

	double chilometri;		 /* output: distanza in chilometri */
	
	int esito_lettura;	         /* lavoro: esito della lettura della scanf */
	


	/* aprire i file */
	
	file_miglia = fopen("miglia.txt",
			    "r");

	file_chilometri = fopen("chilometri.txt",
			        "w");
	
		
	/* controllo dell'esistenza del file */	
	if (file_miglia == NULL)
	{
		fprintf(file_chilometri,
			"Non è stato possibile aprire il file miglia\n");
     		fclose(file_chilometri);		
	}
	
	else
	{
		/* acquisire la distanza in miglia tramite validazione stretta */
		esito_lettura = fscanf(file_miglia,
					"%lf",
					&miglia);
		if (esito_lettura != 1 || miglia < 0)	
		{
			fprintf(file_chilometri,
					"Valore non accettabile\n");
		}
		else
		{
			/* conversione delle miglia in chilometri */
			chilometri = miglia * KM_PER_MI;

			/* comunicare distanza in chilometri */
			fprintf(file_chilometri,
					"La distanza in chilometri equivale a: %f\n",
					chilometri);
		}
		fclose(file_chilometri);
		fclose(file_miglia);

	}

	 
/* chiudere i file */			

return(0);

}
