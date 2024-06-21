#include <stdlib.h>
#include <stdio.h>
int main()
{
    float cm, inch, feet;

    do
    {
        printf("Inserire il valore in centimetri: ");
        scanf("%f", &cm);
        if(cm==0)
            printf("\nValore non valido, reinserirlo.\n");
    }while(cm==0);

    inch=cm/2,54;
    feet=inch/12;

    printf("Il valore di %f\nPollici: %f in\nPiedi: %f ft\n", cm, inch, feet);
    return 0;
}
