#include <stdio.h>

int main()
{
    int arr_sel[8] = {10, 20, 2 , 7 , 4, 12, 8, 15};
    int i, j, aux, pos_aux;
    int menor = 10000;
     printf("array desordenada: \n");
     for (i = 0; i < 8; i++) {
       printf("%d ", arr_sel[i]);
    }
    
    for (i = 0; i < 8; i++) {
        for (j = i; j < 8; j++) {
            if (arr_sel[j] < menor) {
                menor = arr_sel[j];
                pos_aux = j;
            }
        }
        aux = arr_sel[i];
        arr_sel[i] = menor;
        arr_sel[pos_aux] = aux;
        menor = 10000;
    }
    
    printf("\n");
    printf("array ordenada: \n");
    for (i = 0; i < 8; i++) {
    printf("%d ", arr_sel[i]);
    }
    return 0;
}
