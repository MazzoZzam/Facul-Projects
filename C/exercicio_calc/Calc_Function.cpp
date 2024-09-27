#include <stdio.h>
#include <stdlib.h>
float get_value(float value) {
	printf ("\n Digite um valor: ");
	scanf("%f", &value);
	return value;
}

float calc(float val1, float val2, char op) {
	
	if (op == '+') {
	return val1 + val2;
	} 
	
	else if (op == '-') {
	return val1 - val2;	
	}
	
	else if (op == '*') {
	return val1 * val2;
	}
	
	else {
	return val1 / val2;
	}
}

int calc_remainder(int val1, int val2) {
	return val1 % val2;
}

//função de repetir código
int repeat_calc(char con){
	printf ("\n Quer continuar? (S/N)");
	scanf(" %c", &con);
	
	if (con == 's') {
		system ("cls");
	}
	else {
		exit(1);
	}
}
