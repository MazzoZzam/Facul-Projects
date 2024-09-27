#include <stdio.h>
#include <stdlib.h>
//usando outro arquivo como header
#include "Calc_Function.cpp"

int main() {
	float x, y, res;
	
	//variavel para operador matematico
	int opr;
	
	//Repetir programa para o usuário
	do {

	//menu calculadora
	x = get_value(x);
	

	printf ("\n1 - + \n");
	printf ("2 - - \n");
	printf ("3 - * \n");
	printf ("4 - / \n");
	printf ("5 - %% \n");
	printf ("6 - Sair \n");
	printf ("Escolha um dos operadores para o calculo:");
	scanf ("%d", &opr);
	
	y = get_value(y);
	 
	switch (opr) {
		case (1):
			res = calc(x, y, '+');
			printf ("\nResultado = %.2f", res);
			//confirmação de repetição
			repeat_calc (opr);
			break;
		
		case (2):
			res = calc(x, y, '-');
			printf ("\nResultado = %.2f", res);
			repeat_calc (opr);
			break;
		
		case (3):
			res = calc(x, y, '*');
			printf ("\nResultado = %.2f", res);
			repeat_calc (opr);
			break;
		
		case (4):
			res = calc(x, y, '/');
			printf ("\nResultado = %.2f", res);
			repeat_calc (opr);
			break;
			
		case (5):
			res = calc_remainder(x, y);
			printf ("\nResultado = %.2f", res);
			repeat_calc (opr);
			break;
			
		default:
			printf("\nOperador invalido");
	}
	} while (opr != 6);
	return 0;
}
