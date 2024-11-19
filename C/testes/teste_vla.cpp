#include <stdio.h>
#include <stdlib.h>

int main () {
	int size;
    
    printf ("Digite o tamanho do array: ");
    scanf ("%d", &size);
    
    if (size == 0) {
    	printf ("numero invalido");
    	exit (1);
	}
	else {
		int arr[size];
    
    	printf ("Digite alguns numeros: \n");
    	for (int i = 0; i < size; i++) {
    		scanf ("%d", &arr[i]);
		}
	
		printf ("Seus numeros sao: ");
		for (int i = 0; i < size; i++) {
			printf ("%d ", arr[i]);
		}
	}
	
	return 0;
}
