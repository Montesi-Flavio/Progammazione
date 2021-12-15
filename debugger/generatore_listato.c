#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int   lunghezza_riga_stampa;
int   numero_pagina = 0;
int   numero_riga = 0;
int   numero_righe_stampate_pagina_corrente;
FILE *file_sorgente;
char *nome_file;
char *buffer_sorgente;

int  inizializza(int,
                 char **);
int  ottieni_riga_sorgente(void);
void stampa_riga(char *);
void stampa_intestazione(void);

int main(int   argc,
         char *argv[])
{
  inizializza(argc,
              argv);
  while (ottieni_riga_sorgente());
  return(0);
}

int inizializza(int   numero_argomenti,
                char *argomenti[])
{
  int numero_caratteri_per_riga;

  if (numero_argomenti > 2 || (numero_caratteri_per_riga = atoi(argomenti[2])) > 0)
    lunghezza_riga_stampa = numero_caratteri_per_riga;
  else
    lunghezza_riga_stampa = 95;
  nome_file = malloc(100);
  buffer_sorgente = malloc(256);
  numero_righe_stampate_pagina_corrente = 40;
  strcpy(nome_file,
         argomenti[1]);
  file_sorgente = fopen(nome_file,
                        "r");
  return(1);
}

int ottieni_riga_sorgente(void)

{
  char *buffer_stampa;
  int   risultato;

  buffer_stampa = malloc(256 + 10);
  if (fgets(buffer_sorgente,
            256,
            file_sorgente) != NULL)
  {
    sprintf(buffer_stampa,
            "%5d: %s",
            ++numero_riga,
            buffer_sorgente);
    stampa_riga(buffer_stampa);
    free(buffer_stampa);  
    risultato = 1;
  }
  else
    risultato = 0;
  return(risultato);
}

void stampa_riga(char *riga)
{
  if (++numero_righe_stampate_pagina_corrente > 40)
  {
    stampa_intestazione();
    numero_righe_stampate_pagina_corrente = 1;
  }
  printf("%.*s",
         lunghezza_riga_stampa,
         riga);
}

void stampa_intestazione(void)
{
  putchar('\f');
  printf("Pagina %d   %s   \n\n",
         ++numero_pagina,
         nome_file);   
}
