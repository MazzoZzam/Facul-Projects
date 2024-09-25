#include <stdio.h>
#include <stdlib.h>

//função que verifica se nota está dentro do valor esperado (tratativa de erro)
float get_nota (float nota, char prova){
	printf ("\nDigite sua Nota da A%c: ", prova);
	scanf ("%f", &nota);
		//tratativa de erro
		while (nota > 5 || nota < 0) {
		system ("cls");
 		printf ("Nota Invalida, Digite sua nota entre 0 - 5: ");
 		scanf ("%f", &nota);
 		}
	return nota;
}

//validação de nota
int validate_nota(float nota){
	if (nota < 6) {
		system ("cls");
		printf ("Reprovado");
		return 1;
	} else {
		printf ("Aprovado");
		return 0; 	
	}
}

int main () {
	float a1, a2, mf;
	int af;
	
	//request de nota
	a1 = get_nota (a1, '1');
	
	a2 = get_nota (a2, '2');
	
	//calculo da media
	mf = a1 + a2;
	
	//request de validação
	af = validate_nota (mf);
	
	//caso aluno estiver de AF
	switch (af) {
		case 1: 
			af = get_nota (af, 'F');
			
			//Substituir nota AF
			if (af > a2) {
				af += a1;
			} else {
				af += a2;
			}
		
			validate_nota (af);
			printf ("\nNota Final = %d", af);
			break;
		
		default:
			printf ("\nNota Final = %.1f", mf);
	}
	
	return 0;	
}
