#include <stdio.h>
#include <math.h>


//função para calcular expoente
float expo_calc(double x, double y) {
	
	//acumalador multiplicação
	double expo_acc = 1;
	
	//laço de repetição para expoente
	while (y > 0) {
		expo_acc *= x;
		y--;
	}

	return expo_acc;	
}

int main() { 
	double base, expoente, res_expo;
	
	printf("Digite a base: ");
	scanf("%lf", &base);
	printf("Digite o expoente: ");
	scanf("%lf", &expoente);
	
	//chamar função para calcular expoente
	res_expo = expo_calc(base, expoente);
	
	/*
	forma de fazer usando biblioteca
	res_expo = pow(base, expoente);
	*/
	
	printf("Resultado = %.1lf", res_expo);
	
	return 0;
}
