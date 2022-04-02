#include <stdio.h>

long calcola_fatt(int);
long calcola_fatt_ric(int);
/*int calcolo_fib(int);
int calcolo_fib_ric(int);*/

int main()
{

    int fatt, fib, i;
    long ris;

    printf("Calcolo del fattoriale: \n");
    printf("inserisci il numero da calcolare: \n");

    do{
        scanf("%d", &fatt);

        if (fatt < 0)
        {
            printf(" non essiste il fattoriale di un numero negativo!!\n");
            printf(" inserisci un altro valore (positivo)\n");
        }else{
            printf("siuuuuuuuuuummmmmmmmmmmmm");
            ris = calcola_fatt(fatt);
            printf("il risultato è: %ld", ris);
            printf("\n");
            ris = calcola_fatt_ric(fatt);
            printf("il risultato n2 è: %ld", ris);
            printf("\n");
        }
        
    }while(fatt < 0);


   /* printf("Calcolo di fibonacci: \n");
    printf("inserisci il numero da calcolare: \n");

    do{
        scanf("%d", &fib);

        if (fib < 0)
        {
            printf(" non si può calcolare fibonacci con un numero negativo!!\n");
            printf(" inserisci un altro valore (positivo)\n");
        }else{
            calcola_fib(fib);
            printf("\n");
            calcola_fib_ric(fib);
        }
    }while(fib < 0);

*/
    return 0;
}

long calcola_fatt(int n)
{
    int fatt = 0, i;

    for(fatt = 1, i = 2; (i <= n); i++){
            fatt *= i;
            printf("dio can");
    }
       

    return(fatt);
}

long calcola_fatt_ric(int n)
{
    int fatt = 0;

    if(n == 1 || n == 0)
    {
       fatt = 1;
       return(fatt);
    }

    fatt = n * calcola_fatt_ric(n - 1);

}
/*
int calcolo_fib( int n )
{

    return ;
}


int calcolo_fib_ric( int n )
{


    return ;
}*/