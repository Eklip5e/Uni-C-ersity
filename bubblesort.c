/*
 * File: bubbles.c
 --------------------------------------
 Legge una lista di interi terminata dal valore -1, la inserisce in un array ne fa l’ordinamento con bubblesort e infine stampa la sequenza ordinata
 */

#include <stdlib.h>
#include <stdio.h>
#define MAXLIST 50

int leggilista(int lista[], int max);
void ordina(int lista[], int n);
void swap(int lista[], int i, int j);
int scorri(int lista[], int n);
void stampalista(int lista[], int n);

int main(void)
{
    int n, lista[MAXLIST];
    n=leggilista(lista, MAXLIST);
    ordina(lista, n);
    stampalista(lista, n);
    return 0;
}

int leggilista(int lista[], int max)
{
    int n=0, val;
    printf("Inserire una sequenza di valori, -1 per terminare.");
    for(n=0; n<max; n++)
    {
        printf("\nInserisci il prossimo valore: ");
        scanf("%d", &val);
        if(val==-1)
        {
            break;
        }
        lista[n]=val;
    }

    return n;

}

void ordina(int lista[], int n)
{
    while(scorri(lista, n));
}

int scorri(int lista[], int n)
{
    int i, scambi=0;
    for(i=0; i<n; i++)
    {
        if(lista[i]>lista[i+1])
        {
            swap(lista, i, i+1);
            scambi=1;
        }
    }

    return scambi;
}

void swap(int lista[], int i, int j)
{
    int temp;
    temp=lista[i];
    lista[i]=lista[j];
    lista[j]=temp;
}

void stampalista(int lista[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf("\n%d\n", lista[i]);
    }
}
