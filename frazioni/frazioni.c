/*****************************/
/* inclusione delle librerie */
/*****************************/
#include <stdio.h>
/********************************/
/* dichiarazione delle funzioni */
/********************************/
void leggi_frazione(int *,
int *);

char leggi_operatore(void);

void somma_frazioni(int,
                    int,
                    int,
                    int,
                    int *,
                    int *);

void moltiplica_frazioni(int,
                        int,
                        int,
                        int,
                        int *,
                        int *);

void stampa_frazione(int, int);

/* definizione della funzione per leggere una frazione */
void leggi_frazione(int *num,
/* output: numeratore della frazione */
int *den)
/* output: denominatore della frazione */
{
    /* dichiarazione delle variabili locali alla funzione */
    char sep;
    /* lavoro: carattere che separa numeratore e denominatore */
    int esito_lettura;
    /* lavoro: esito della scanf */

    /* leggere e validare la frazione */
    do
    {
        printf("Digita una frazione come coppia di interi separati da \"/\" ");
        printf("con il secondo intero strettamente positivo: ");
        esito_lettura = scanf("%d %c%d",
        num,
        &sep,
        den);

        if (esito_lettura != 3 || sep != '/' || *den <= 0)
            printf("Valori non accettabili!\n");
        while (getchar() != '\n');
    }
    while (esito_lettura != 3 || sep != '/' || *den <= 0);
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
        scanf(" %c",
        &op);
    }
    while (op != '+' && op != '-' && op != '*' && op != ':');

return(op);
}

/* definizione della funzione per*/
void somma_frazioni(int n1,
int d1,
int n2,
int d2,
int *n,
int *d)
{
    /* sommare le due frazioni */
    *n = n1 * d2 + n2 * d1;
    *d = d1 * d2;
}

/* sommare due frazioni */

/* input: denominatore della prima frazione */
/* input: numeratore della seconda frazione */
/* input: numeratore della prima frazione */
/* input: denominatore della seconda frazione */
/* output: numeratore della frazione risultato */
/* output: denominatore della frazione risultato */
/* definizione della funzione per moltiplicare due frazioni */
void moltiplica_frazioni(int n1,
/* input: numeratore della prima frazione */
int d1,
/* input: denominatore della prima frazione */
int n2,
/* input: numeratore della seconda frazione */
int d2,
/* input: denominatore della seconda frazione */
int *n,
/* output: numeratore della frazione risultato */
int *d)
/* output: denominatore della frazione risultato */
{
/* moltiplicare le due frazioni */
*n = n1 * n2;
*d = d1 * d2;
}

/* definizione della funzione per stampare una frazione */
void stampa_frazione(int num,
/* input: numeratore della frazione */
int den)
/* input: denominatore della frazione */
{
    /* stampare la frazione */
    printf("La frazione risultato e’ %d/%d\n",
    num,
    den);
} 