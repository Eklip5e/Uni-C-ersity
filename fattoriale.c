#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n, i, fatt;
    i=0;
    fatt=1;

    do
    {
        printf("Inserire un numero positivo intero: ");
        scanf("%d", &n);

        if(n<=0)
            printf("Il numero non e\' valido, reinserirlo.");
    }while(n<=0);

    for(i=2; i<=n; i++)
    {
    fatt=fatt*i;
    }
    printf("Il fattoriale di %d, e\' %d", n, fatt);
    return 0;
}
