#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(0, "Portuguese");
	/*QUESTÃO 21) Escreva um programa que leia doze números do tipo inteiro ao usuário. Separe esses 
	números em pares e ímpares e os armazenem em dois outros vetores separando pares e 
	ímpares, exibindo os resultados na tela.
	*/	
	
	int numeros[12], contadorPar = 0, contadorImpar = 0, contador, segContador = 0;
	
	for(contador = 0; contador < 12; contador++) {
		printf("Digite um número:");
		scanf("%d", &numeros[contador]);
	}
	
	for(contador = 0; contador < 12; contador++) {
		if(numeros[contador] % 2 == 0) {
			contadorPar++;	
		} else {
			contadorImpar++;
		}
	}
	
	int numerosPares[contadorPar], numerosImpares[contadorImpar];

	for(contador = 0; contador < 12; contador++) {
		if(numeros[contador] % 2 == 0) {
		numerosPares[segContador] = numeros[contador];
		printf("%d ", numerosPares[segContador]);
		segContador++;	
		}
	}
	
	printf("\n\n");
	
	for(contador = 0; contador < 12; contador++) {
		if(numeros[contador] % 2 != 0) {
		numerosImpares[segContador] = numeros[contador];
		printf("%d ", numerosImpares[segContador]);
		segContador++;	
		}
	}
}
