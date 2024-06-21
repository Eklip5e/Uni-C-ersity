#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define X 3
#define Y 3

int main(void)
{
    int i=0, j=0;
    int comando, isinterrupted=0;
    char scelta;
    int array[X][Y];

    do {
        printf("Su questo programma sono disponibili i seguenti comandi: \n");
        printf("\nInserire Valori = 1\nStampare Valori = 2\nComando: ");
        scanf("%d", &comando);

        switch(comando)
        {
            case 1:
            {
                printf("Inserire una sequenza di valori, -1 per interrompere l'inserimento. ");


                for(i=0; i<X; i++)
                {
                    for(j=0; j<Y; j++)
                    {
                        if (isinterrupted==1)
                        {
                            array[i][j]=0;
                        }
                        else
                        {
                            printf("\nInserire il valore della riga %d, colonna %d: ", i+1, j+1);
                            scanf("%d", &array[i][j]);
                        }

                        if(array[i][j]==-1)
                        {

                            isinterrupted=1;
                            array[i][j]=0;
                        }

                    }


                }
                break;
            }

            case 2:
            {
                for(i=0; i<X; i++)
                {
                    for(j=0; j<Y; j++)
                    {
                        printf("%d, ", array[i][j]);
                    }

                    printf("\n");

                }
                break;
            }

            default:
            {
                printf("Comando non valido.\n");
                break;
            }
        }
    do
    {
        printf("Uscire dal programma? [S/N]");
        printf("\nScelta: ");
        while(getchar() != '\n');
        scanf("%c", &scelta);

        if(toupper(scelta)!='N'&&toupper(scelta)!='S')
        {
            printf("Scelta non valida.\n");
        }
        if(toupper(scelta)=='S')
            return 0;
    }
    while (toupper(scelta)!='N'&&toupper(scelta)!='S');

    }
while (toupper(scelta)=='N');


    return 0;
}
