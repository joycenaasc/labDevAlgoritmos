#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(0, "Portuguese");
	/*QUEST�O 19) Escreva um programa para informar o maior elemento de um vetor de 5 posi��es do tipo 
	inteiro. 
	*/
	
	int numeros[5], contador, maiorNumero;
	
	for(contador = 0; contador < 5; contador++) {
		printf("Digite um n�mero inteiro: \n");
		scanf("%d", &numeros[contador]);
	}
	
	printf("\n");
	
	for(contador = 0; contador < 5; contador++) {
		if(maiorNumero > numeros[contador]) {
			maiorNumero = maiorNumero;
		} else {
			maiorNumero = numeros[contador];
		}
	}
	
	printf("O maior n�mero �: %d", maiorNumero);
}
