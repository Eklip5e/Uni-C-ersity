#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, prec, succ;
    printf("Inserire un numero: ");
    scanf("%d", &a);
    prec=a-1;
    succ=a+1;

    printf("\n\nIl numero che hai inserito e\': %d", a);
    printf("\nIl numero precedente di %d e\' %d", a, prec);
    printf("\nIl numero successivo di %d e\' %d\n", a, succ);
    system("PAUSE");
    return 0;
}

