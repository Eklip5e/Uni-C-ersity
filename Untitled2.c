/* � Un college ha una lista di risultati di test (1 = promosso, 2 = bocciato) per 10 studenti. Scrivere un programma che analizza i risultati.
Se pi� di 8 studenti sono stati promossi, visualizzare �Aumentare le tasse�
�  Nota che:
� Il programma deve elaborare 10 risultati di test
� Sar� usato un ciclo controllato da contatore
� Due contatori possono essere usati
� Uno per il numeno di promossi, uno per il numero di bocciati
� Ogni risultato di test � un numero (1 o 2)
� Se il numero non � un 1, assumiamo che � un 2 */

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int voto, i;
    for(i=0; i<=9; i++)
    {
        printf("Lo studente e' stato promosso o bocciato?\n\nPromosso = 1\nBocciato = 2\n");
        scanf("%d", &voto);
    }
}
