#include <stdio.h>

int main()
{
    int arr_sert[8] = {10, 20, 2 , 7 , 4, 12, 8, 15};
    int i, j, aux;
    
    printf("array desordenada: \n");
     for (i = 0; i < 8; i++) {
       printf("%d ", arr_sert[i]);
    }
    
    for (i = 0; i < 8; i++) {
        for (j = i + 1; j < 8; j++) {
            if (arr_sert[i] > arr_sert[j]) {
                aux = arr_sert[j];
                arr_sert[j] = arr_sert[i];
                arr_sert[i] = aux;
            }
        }
    }
    printf("\n");
    printf("array ordenada: \n");
     for (i = 0; i < 8; i++) {
       printf("%d ", arr_sert[i]);
    }

    return 0;
}
