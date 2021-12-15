#include <stdio.h>
#include "frazioni.h"
/* definizione della funzione main */
int main(void)
{
    /* dichiarazione delle variabili locali alla funzione */
    int n1,
    /* input: numeratore della prima frazione */
    d1,
    /* input: denominatore della prima frazione */
    n2,
    /* input: numeratore della seconda frazione */
    d2;
    /* input: denominatore della seconda frazione */
    char op;
    /* input: operatore aritmetico da applicare */
    int n,
    /* output: numeratore della frazione risultato */
    d;
    /* output: denominatore della frazione risultato */

    /* acquisire la prima frazione */
    leggi_frazione(&n1,
    &d1);
    /* acquisire l’operatore aritmetico */
    op = leggi_operatore();

    /* acquisire la seconda frazione */
    leggi_frazione(&n2,
    &d2);

    /* applicare l’operatore aritmetico */
    switch (op)
    {
    case '+':
        somma_frazioni(n1,
        d1,
        n2,
        d2,
        &n,
        &d);
    break;

    case '-':
        somma_frazioni(n1,
        d1,
        -n2,
        d2,
        &n,
        &d);
    break;

    case '*':
        moltiplica_frazioni(n1,
        d1,
        n2,
        d2,
        &n,
        &d);
    break;

    case ':':
    if (n2 != 0)
        moltiplica_frazioni(n1,
        d1,
        d2,
        n2,
        &n,
        &d);
    break;
    }

    /* comunicare il risultato sotto forma di frazione */
    if (op != ':' || n2 != 0)
        stampa_frazione(n,d);
    else
        printf("Divisione illegale!");

return(0);
}
