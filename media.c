#include <stdlib.h>
#include <stdio.h>
int main()
{
    int a, b, c;
    float d;

    printf("Inserire il primo numero: ");
    scanf("%d", &a);
    printf("\nInserire il secondo numero: ");
    scanf("%d", &b);
    printf("\nInserire il terzo numero: ");
    scanf("%d", &c);

    d=(float)(a+b+c)/3;

    printf("\nLa media tra %d, %d, e %d e\': %f\n", a, b, c, d);
    return 0;
}
