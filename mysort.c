/*
*Author: Gabriele Triglia
*Version: 1.0
*/


#include <stdio.h>
#include "mysort.h"


void metodo_inserzione(int* vettore, int dim)
{
  //riordinamento ad inserzione del vettore
  int p,j;
  printf("\n=============Passaggi============\n\n");
  for (int i=1; i<dim; ++i)
  {
    p = vettore[i];
    j = i-1;
    while ((j>=0) && (vettore[j]>p))
    {
      vettore[j+1] = vettore[j];
      --j;
    }
    vettore[j+1] = p;

    //stampa passaggi
    printf("Passaggio %d: ", i);

    for(int i=0; i<dim; i++)
    {
      printf("Cella [%d] = %d " , i, vettore[i]);
    }
    printf("\n");
  }
  printf("\n=================================\n\n");
}

void metodo_scambio(int* vettore, int dim)
{
  //riordinamento scambio (bubbleSort) del vettore
  int temp;
  printf("\n=============Passaggi============\n\n");
  for (int i = 1 ; i<dim ; ++i )
  {
    for (int j=dim-1; j>=i ; --j )
    {
      if ( vettore[j-1] > vettore[j])
      {
        temp = vettore[j-1];
        vettore[j-1] = vettore[j];
        vettore[j] = temp;
      }
    }
    //stampa passaggi
    printf("Passaggio %d: ", i);

    for(int i=0; i<dim; i++)
    {
      printf("Cella [%d] = %d " , i, vettore[i]);
    }
    printf("\n");
  }
  printf("\n=================================\n\n");
}

void metodo_selezione(int* vettore, int dim)
{
  //riordinamento a selezione del vettore
  int min, pmin, temp;
  printf("\n=============Passaggi============\n\n");
  for (int i=0; i < dim ; ++i)
  {
    //trova minimo
    min = vettore[i];
    pmin = i;
    for (int j=i+1; j < dim; ++j )
    {
      if (min > vettore[j])
      {
        min = vettore[j];
        pmin = j;
      }
    }
    //scambia i valori
    temp = vettore[i];
    vettore[i] = vettore[pmin];
    vettore[pmin] = temp;

    //stampa passaggi
    printf("Passaggio %d: ", i);

    for(int i=0; i<dim; i++)
    {
      printf("Cella [%d] = %d " , i, vettore[i]);
    }
    printf("\n");
  }
  printf("\n=================================\n\n");
}

void metodo_sostituzione(int* vettore, int dim)
{
  //riordinamento a sostituzione del vettore
  int temp;
  printf("\n=============Passaggi============\n\n");
  for (int i=0; i < dim-1; ++i)
  {
    for (int j=i+1; j<dim; ++j )
    {
      if (vettore[i] > vettore[j])
      {
        temp = vettore[i];
        vettore[i] = vettore[j];
        vettore[j] = temp;
      }
    }

    //stampa passaggi
    printf("Passaggio %d: ", i);

    for(int i=0; i<dim; i++)
    {
      printf("Cella [%d] = %d " , i, vettore[i]);
    }
    printf("\n");
  }
  printf("\n=================================\n\n");
}
