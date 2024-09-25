#include <stdio.h>
#include <stdlib.h>
//usando outro arquivo como header
#include "Calc_Function.cpp"

int main() {
	float x, y, res;
	
	//variavel para operador matematico
	int opr;
	
	//menu calculadora
	printf ("Digite um valor: ");
	scanf ("%f", &x);
	
	printf ("\n1 - + \n");
	printf ("2 - - \n");
	printf ("3 - * \n");
	printf ("4 - / \n");
	printf ("5 - %% \n");
	printf ("Escolha um dos operadores para o calculo: ");
	scanf ("%d", &opr);
	
	printf ("\nDigite outro valor: ");
	scanf ("%f", &y);
	 
	switch (opr) {
		case (1):
			res = som(x, y);
			printf ("\nResultado = %.2f", res);
			break;
		
		case (2):
			res = sub(x, y);
			printf ("\nResultado = %.2f", res);
			break;
		
		case (3):
			res = mult(x, y);
			printf ("\nResultado = %.2f", res);
			break;
		
		case (4):
			res = divi(x, y);
			printf ("\nResultado = %.2f", res);
			break;
			
		case (5):
			res = rest(x, y);
			printf ("\nResultado = %.0f", res);
			break;
			
		default:
			printf("\nOperador invalido");
	}
	return 0;
}
