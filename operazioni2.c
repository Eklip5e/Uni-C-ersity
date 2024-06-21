/* Si scriva un programma in linguaggio C capace di compiere le 4 operazioni (somma, sottrazione, moltiplicazione e divisione) tra due
numeri reali inseriti da tastiera. Dopo che sono stati inseriti i due numeri, detti A e B, il programma dovrà visualizzare i quattro valori
A+B, A-B, A*B, A/B. Si ipotizzi che sia B≠0.  */

#include <stdlib.h>
#include <stdio.h>
int main()
{
    int a, b, somma, sottrazione, op;
    float moltiplicazione, divisione, risultato;

    printf("Inserire il primo numero: ");
    scanf("%d", &a);
    do
    {
    printf("\nInserire il secondo numero: ");
    scanf("%d", &b);
        if(b==0)
            printf("\nIl numero non e\' valido, reinserire un valore valido.\n");
        else
            break;
    }
    while(b==0);

    printf("Le operazioni disponibili sono:\nSomma = 1;\nSottrazione = 2;\nMoltiplicazione = 3;\nDivisione = 4;\n");
    printf("\nSelezionare il tipo di operazione: ");
    scanf("%d", &op);



    switch(op){

    case 1:
        {
        somma=a+b;
        printf("\nIl risultato di %d + %d e\'= %d\n", a, b, somma);
        break;
        }


    case 2:
        {
        sottrazione=a-b;
        printf("\nIl risultato di %d - %d e\'= %d\n", a, b, sottrazione);
        break;
        }


    case 3:
        {
        moltiplicazione=(float)a*b;
        printf("\nIl risultato di %d * %d e\'= %f\n", a, b, moltiplicazione);
        break;
        }

    case 4:
        {
        divisione=(float)a/b;
        printf("\nIl risultato di %d / %d e\'= %f\n", a, b, divisione);
        break;
        }

    default:
        somma=a+b;
        sottrazione=a-b;
        moltiplicazione=(float)a*b;
        divisione=(float)a/b;
        printf("Operatore non valido.\n\nVerranno dati i risultati di tutte le operazioni: \nSomma di %d + %d = %d\nSottazione di %d - %d = %d\nMoltiplicazione di %d * %d = %f\nDivisione di %d / %d = %f\n", a, b, somma, a, b, sottrazione, a, b, moltiplicazione, a, b, divisione);
        break;
    }

    return 0;
}
