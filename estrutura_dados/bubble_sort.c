#include <stdio.h>

int main() {
    int array_bub[8] = {10, 20, 2 , 7 , 4, 12, 8, 15};
    int i, j, aux, troca;
    int tam = sizeof(array_bub) / sizeof(array_bub[0]);
    int x = 1;

    printf("Array Desordenada: \n");
    for (i = 0; i < tam; i++) {
        printf("%d ", array_bub[i]);
    }

    do {
        troca = 0;
        for (i = 0; i < (tam - x); i++) {
            j = i + 1;
            if (array_bub[i] > array_bub[j]) {
                aux = array_bub[i];
                array_bub[i] = array_bub[j];
                array_bub[j] = aux;
                troca = 1;
            }
        }
        if (troca == 1) {
            x++;
        }
    } while (troca != 0);

    printf("\n");
    printf("Array Ordenada: \n");
    for (i = 0; i < tam; i++) {
        printf("%d ", array_bub[i]);
    }

    return 0;
}