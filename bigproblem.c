#include <stdatomic.h>
#include <stdio.h>
#include <stdlib.h>

#define X 3
#define Y 3



int leggilista(int array[][Y]);
void printlista(int array[][Y], int n);
int bubblesort(int array[][Y]);
int shift();
void ricerca(int array[][Y]);

int main()
{
    int lista[X][Y], n;
    n=leggilista(lista);
    printlista(lista, n);
    ricerca(lista);
    return 0;
}

int leggilista(int array[][Y])
{
    int i=0, j=0;
    int isinterrupted=0;
    printf("Inserisci un valore, -1 per interrompere.\n");
    for(i=0; i<X; i++)
    {
        for(j=0; j<Y; j++)
        {
            if(isinterrupted==1)
            {
                array[i][j]=0;
            }
            else
            {
                printf("\nInserisci il valore nella riga %d, colonna %d\n", i+1, j+1);
                printf("Valore: ");
                scanf("%d", &array[i][j]);
            }
            if(array[i][j]==-1)
            {
                isinterrupted=1;
                array[i][j]=0;
            }
        }
    }
    return i;
    return j;

}

void printlista(int array[][Y], int n)
{
    int i=0, j=0;
    for (i=0; i<X; i++)
    {
        for(j=0; j<Y; j++)
        {
            printf("%d, ", array[i][j]);
        }
        printf("\n");
    }
}

void ricerca(int array[][Y])
{
    int val, i=0, j=0, found=0;
    int posx, posy;
    printf("\nInserire il valore da cercare: ");
    while(getchar()!='\n');
    scanf("%d", &val);

        for(i=0; i<X; i++)
        {
            for(j=0; j<Y; j++)
            {
                if(found==1)
                {
                    printf("\nValore trovato!\nIl valore e' nella riga %d colonna %d", posx, posy);
                    break;
                }

                if(array[i][j]==val)
                {
                    found=1;
                    posx=i+1;
                    posy=j+1;
                }
                else
                {
                    found=0;
                }
            }


        }



}
