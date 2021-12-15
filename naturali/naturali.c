/*****************************/
/* inclusione delle librerie */
/*****************************/
#include <stdio.h>
/********************************/
/* dichiarazione delle funzioni */
/********************************/
void leggi(int *);

char leggi_frazione(void);

void somma(int,   
           int,
           int *);

void moltiplica(int,
                int,
                int *);

void stampa(int);

void leggi(int *n)
{
    do
    {
        printf("inserisci i numeri da calcolare : ");
        scanf("%d", &n);

        if (n < 0)
        {
            printf("il valore deve essere positivo");
        }
        
        while (getchar() != '\n');  

    } while (n < 0);
    
}

/* definizione della funzione per leggere un operatore aritmetico */
char leggi_operatore(void)
{
    /* dichiarazione delle variabili locali alla funzione */
    char op;
    /* output: operatore aritmetico */
    /* leggere e validare l’operatore aritmetico */
    do
    {
        printf("Digita un operatore aritmetico (+, -, *, :): ");
        scanf(  "%c",
                &op);
    } while (op != '+' && op != '-' && op != '*' && op != ':');

return(op);
}

/* definizione della funzione per*/
void somma(int n1,
int n2,
int *n)
{
    /* sommare */
    *n = n1 + n2 ;
}

void moltiplica(int n1,
/* input: primo num */
int n2,
/* input: secondo num */
int *n)
/* output: denominatore della frazione risultato */
{
/* moltiplicare le due frazioni */
    *n = n1 * n2;
}

void dividi(double n1, 
int n2, double *n)
{
    *n = n1 / n2;
}

/* definizione della funzione per stampare una frazione */
void stampa(int num)
{
    /* stampare la frazione */
    printf("La frazione risultato e’ %d\n",
    num);
} 