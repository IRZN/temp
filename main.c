#include <stdio.h>
#include <stdlib.h>

int main () {
    int temp, amp, med_neg, med_pos, i = 0;
    int menor = 0, maior = 0, som_pos = 0, som_neg = 0;
    int cont_pos = 0, cont_neg = 0;

    do {
        printf ("\nEscreva a temperatura: \n");
        scanf ("%i", &temp);

        if (temp > 0) {
            som_pos = som_pos + temp;
            cont_pos++;
        } else {
            som_neg = som_neg + temp;
            cont_neg++;
        }
        if (temp >= maior) {
            maior = temp;
        }
        if (temp < menor) {
            menor = temp;
        }
    i++;
    } while (i < 10);

    med_neg = som_neg / cont_neg;
    med_pos = som_pos / cont_pos;
    amp = maior - menor;

    printf ("\nA media das temperaturas positivas eh: %d \n", med_pos);
    printf ("A media das temperaturas negativas eh: %d \n", med_neg);
    printf ("A amplitude termica eh: %d \n", amp);

    return 0;
}