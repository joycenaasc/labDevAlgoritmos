#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(0, "Portuguese");
	/*QUESTÃO 25) Faça um programa que lê um conjunto de 10 valores inteiros e verifica se algum dos 
	valores é igual a média dos mesmos
	*/
	
	int contador, segContador, mediaValores, valores[10], somaValores = 0;;
	
	for(contador = 0; contador < 10; contador++) {
		printf("Digite um numero:");
		scanf("%d", &valores[contador]);
		
		somaValores += valores[contador];
	}
	
	mediaValores = somaValores / 10;
	
	for(contador = 0; contador < 10; contador++) {
		if(valores[contador] == mediaValores) {
			printf("O número %d é igual a média dos valores informados \n", valores[contador]);
		}
	}
}
