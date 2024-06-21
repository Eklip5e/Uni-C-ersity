#include <stdlib.h>
#include <stdio.h>

float broker(float valore);
int main()
{
    float valore;
    do
    {
        printf("inserire valore: ");
        scanf("%f", &valore);
        if(valore<39)
            printf("\nValore non valido\n");
    }
    while(valore<39);

    printf("commissione %f", broker(valore));
}

float broker(float valore)
{
    float percentuale;
    float comm;
    if (valore<2500)
    {
        percentuale=(valore*1.7)/100;
        comm=percentuale+30;
    }
    else if (valore>=2500&&valore<=6250)
    {
        percentuale=(valore*0.66)/100;
        comm=percentuale+56;
    }
    else if (valore>6250&&valore<=20000)
    {
        percentuale=(valore*0.34)/100;
        comm=percentuale+76;
    }
    else if (valore>20000&&valore<=50000)
    {
        percentuale=(valore*0.22)/100;
        comm=percentuale+100;
    }
    else if (valore>50000)
    {
        percentuale=(valore*0.09)/100;
        comm=percentuale+255;
    }
    return comm;
}
