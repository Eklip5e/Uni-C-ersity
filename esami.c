#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i=0, voto=0;
    float media=0;
    for (i=0; i<=9; i++)
    {
        printf("\nInserire il voto dello studente in centesimi: ");
        scanf("%d", &voto);
        media=media+voto;
    }
    media=media/10;
    printf("\nLa media complessiva della classe e': %f\n", media);
    return 0;
}
