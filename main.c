/*
*Author: Gabriele Triglia
*Version: 1.0
*/

#include <stdio.h>
#include <stdlib.h>
#include "mysort.h"

#define MAX 10 //dimensione massima vettore


int main()
{
  int dim; //dimensione asseganata vettore
  int vettore[MAX];
  int sort_method_id = -1;
  char selection[1024];

  while (1) {
    printf("Seleziona il metodo di riordinamento\n");
    printf("\t1: inserzione\n");
    printf("\t2: scambio\n");
    printf("\t3: selezione\n");
    printf("\t4: sostituzione\n");
    printf("\taltrimenti: esci\n");
    scanf("%s", selection);

    system("clear");

    sort_method_id = atoi(selection);
    if (sort_method_id < 1 || sort_method_id > 4)
      exit(0);

    //inserimento dim
    do {
      printf("Inserire la dimensione del vettore (max 10): ");
      scanf("%d", &dim);
    } while((dim<1) || (dim>MAX));

    //inserimento valori nel vettore
    printf("Inserire %d numeri\n", dim);
    for(int i=0; i<dim; i++)
    {
      printf("Cella [%d] = ", i);
      scanf("%d", &vettore[i]);
      printf("\n");
    }

    printf("Vettore inserito\n");

    //visualizza il vettore inserito
    for(int i=0; i<dim; i++)
    {
      printf("Cella [%d] = %d " , i, vettore[i]);
      printf("\n");
    }

    //sceglie il metodo da utilizzare
    switch (sort_method_id) {
      case 1: metodo_inserzione(vettore, dim); break;
      case 2: metodo_scambio(vettore, dim); break;
      case 3: metodo_selezione(vettore, dim); break;
      case 4: metodo_sostituzione(vettore, dim); break;
    }

    printf("Vettore ordinato\n");

    //visualizza il vettore ordinato
    for(int i=0; i<dim; i++)
    {
      printf("Cella [%d] = %d " , i, vettore[i]);
      printf("\n");
    }
    printf("\n=================================\n\n");
  }
}
