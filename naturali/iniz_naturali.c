#include <stdio.h>
#include "naturali.h"
/* definizione della funzione main */
int main(void)
{
    /* dichiarazione delle variabili locali alla funzione */
    int n1,
    /* input: primo num */
    n2;
    /* input: secondo num */
    char op;
    /* input: operatore aritmetico da applicare */
    int ris;
    /* output: denominatore del risultato */

    /* acquisire il primo num */
    leggi(&n1);
    /* acquisire l’operatore aritmetico */
    op = leggi_operatore();

    /* acquisire il secondo num */
    leggi(&n2);

    /* applicare l’operatore aritmetico */
    switch (op)
    {
    case '+':
        somma(n1,
        n2,
        &ris);
    break;

    case '-':
        somma(n1,
        -n2,
        &ris);
    break;

    case '*':
        moltiplica(n1,
        n2,
        &ris);
    break;

    case ':':
    if (n2 != 0)
        dividi(n1,
               n2,
               &ris);
    break;
    }

    /* comunicare il risultato */
    if (op != ':' || n2 != 0)
        stampa(n1);
    else
        printf("Divisione illegale!");

return(0);
}
