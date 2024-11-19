#include <stdio.h>

int main() {
	
	int limit, i, res = 1;
 	
	printf("Digite quantos sequencias quer gerar: ");
	scanf("%d", &limit);
	
	int fibo[limit];
	
	for (i = 0; i < limit; i++) {
		fibo[i] = res;
		printf("%d\n", fibo[i]);
		
		res = fibo[i] + fibo[i - 1];
	}
	
	return 0;
}
