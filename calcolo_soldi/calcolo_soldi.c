/***************************************************************/
/* programma per determinare il valore di un insieme di monete */
/***************************************************************/
/*****************************/
/* inclusione delle librerie */
/*****************************/
#include <stdio.h>
/*****************************************/

#define CENT_PER_EURO 100;

/***********************************/
/* definizione della funzione main */
/***********************************/
int main(void)
{
    /* numei da calcolare */
    double monete[] = {
        1, 
        2, 
        5, 
        10, 
        20, 
        50, 
        100, 
        200
    };
/* numeri da inserire nelle domande */
    int domande[] = { 
        1,
        2,
        5,
        10,
        20,
        50,
        1,
        2        
    };

    char tipo[][10] = { "centesimi", 
                    "euro"
    };

    /* dichiarazione delle variabili locali alla funzione */
    int num_monete[7];
    /* contatore */
    int k = 0, 
        i = 0,
        /* output: valore espresso in numero di euro */
        valore_euro, 
        /* output: numero di centesimi della frazione di euro */
        frazione_euro;

    int valore_centesimi = 0;

    for(i = 0; i <= 7; i++)
    {    
        do{ 
            printf("Digita il numero di monete da %d %s :", domande[i], tipo[k]);
            scanf("%d", &num_monete[i]);
            if (num_monete[i] < 0)
            {
                printf("Inserisci un numero non negativo \n");
                i = i-1;
            }
        }while (num_monete[i] < 0);
        
        
        if (i == 5)
        {
            k = 1;
        }
        
    }

    /* calcolare il valore totale delle monete in centesimi */
    for(i = 0; i <= 7;  i++) {
        valore_centesimi += num_monete[i] * monete[i];
    }

    /* convertire il valore totale delle monete in euro e frazione di euro */
    valore_euro = valore_centesimi / CENT_PER_EURO;
    frazione_euro = valore_centesimi % CENT_PER_EURO;

    /* comunicare il valore totale delle monete in euro e frazione di euro */
    printf("Il valore delle monete e’ di %d euro e %d centesim%c.\n",
    valore_euro,
    frazione_euro,
    (frazione_euro == 1)? 'o': 'i');

return(0);
}