/**************************************************/
/* programma per calcolare la bolletta dell’acqua */
/**************************************************/
/*****************************/
/* inclusione delle librerie */
/*****************************/
#include <stdio.h>
/*****************************************/
/* definizione delle costanti simboliche */
/*****************************************/
#define QUOTA_FISSA 15.00
#define COSTO_PER_M3 2.50
#define MORA 10.00
/* quota fissa */
/* costo per metro cubo */
/* mora */
/***********************************/
/* definizione della funzione main */
/***********************************/

int main(void)
{
	/* dichiarazione delle variabili locali alla funzione */
	int
	lettura_prec,
	/* input: lettura alla fine periodo precedente */
	lettura_corr,
	/* valore di controllo */
	vero;
	/* input: lettura alla fine periodo corrente */
	double importo_arretrato;
	/* input: importo delle bollette arretrate */
	double importo_bolletta;
	/* output: importo della bolletta */
	double importo_consumo,
	/* lavoro: importo del consumo */
	importo_mora;
	/* lavoro: importo della mora se dovuta */
	do{
		/* acquisire le ultime due letture del contatore */
		printf("Digita il consumo risultante dalla lettura precedente: ");
		scanf("%d",
		&lettura_prec);
		
		while (getchar() != '\n');
		
		if(lettura_prec < 0)
			printf("Valore non valido\n");
			
	}while (lettura_prec < 0);
	
	do{
		printf("Digita il consumo risultante dalla lettura corrente: ");
		scanf("%d",
		&lettura_corr);
		
		while (getchar() != '\n');
		
		if(lettura_corr < 0 )
			printf("Valore non valido\n");
			
		if(lettura_prec > lettura_corr)
			printf("il valore non può essere minore del precedenten\n");
			
	}while(lettura_corr < 0 || lettura_prec > lettura_corr);
	
	do{	
		/* acquisire l’importo di eventuali bollette precedenti ancora da pagare */
		printf("Digita l’importo di eventuali bollette precedenti ancora da pagare: ");
		scanf("%lf",
		&importo_arretrato);
		
		if(importo_arretrato < 0)
			printf("Valore non valido\n");
		
		while (getchar() != '\n');	
	}while(importo_arretrato < 0);
	
	/* calcolare l’importo derivante dal consumo di acqua nel periodo corrente */
	importo_consumo = (lettura_corr - lettura_prec) * COSTO_PER_M3;
	
	/* determinare l’applicabilita’ della mora */
	importo_mora = (importo_arretrato > 0)? MORA: 0;
		
	/* sommare le varie voci */
	importo_bolletta = QUOTA_FISSA +
	importo_consumo +
	importo_arretrato +
	importo_mora;
	
	/* comunicare l’importo della bolletta evidenziando l’eventuale mora */
	printf("\nTotale bolletta: %.2f euro.\n",
	importo_bolletta);
	
	if (importo_mora > 0)
	{
		printf("\nLa bolletta comprende una mora di %.2f euro",
		importo_mora);
		printf(" per un arretrato di %.2f euro.\n",
		importo_arretrato);
	}
		
	return(0);
}
