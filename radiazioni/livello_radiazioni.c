/***************************************************/
/* programma per calcolare i livelli di radiazione */
/***************************************************/
/*****************************/
/* inclusione delle librerie */
/*****************************/
#include <stdio.h>
/*****************************************/
/* definizione delle costanti simboliche */
/*****************************************/
#define SOGLIA_SICUREZZA 0.0466
#define FATTORE_RIDUZIONE 2
#define NUMERO_GIORNI 3
/* soglia di sicurezza */
/* fattore di riduzione delle radiazioni */
/* numero di giorni di riferimento */
/***********************************/
/* definizione della funzione main */
/***********************************/
	int main(void)
	{
		/* dichiarazione delle variabili locali alla funzione */
		double livello_iniziale;
		/* input: livello iniziale delle radiazioni */
		int giorno_sicurezza;
		/* output: giorno di ripristino della sicurezza */
		double livello_corrente;
		/* output: livello corrente delle radiazioni */
		
		/* acquisire il livello iniziale delle radiazioni */
		do
		{
			printf("Digita il livello iniziale delle radiazioni (> 0): ");
			scanf("%lf",
			&livello_iniziale);
		}
		while (livello_iniziale <= 0);
		
		/* calcolare e comunicare il livello delle radiazioni ogni tre giorni finche’
		il livello non scende al di sotto di un decimo del livello di sicurezza */
		for (livello_corrente = livello_iniziale,
		giorno_sicurezza = 0;
		(livello_corrente >= SOGLIA_SICUREZZA);
		livello_corrente /= FATTORE_RIDUZIONE,
		giorno_sicurezza += NUMERO_GIORNI)
		
		printf("Il livello delle radiazioni al giorno %3d e’ %9.4f.\n",
		giorno_sicurezza,
		livello_corrente);
		
		/* comunicare il giorno in cui il livello delle radiazioni scende al di sotto
		di un decimo del livello di sicurezza */
		printf("Giorno in cui si puo’ tornare in laboratorio: %d.\n",
		giorno_sicurezza);
	
	return(0);
	}
