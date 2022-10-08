#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(0, "Portuguese");
	/*QUESTÃO 10) Faça um programa que receba um número inteiro e que verifique se esse número é par 
	ou ímpar. O programa deve informar se o número é par, caso afirmativo informar também se 
	é ou não maior que 15 ou se o número é ímpar, caso afirmativo informar se é ou não menor 
	que 50. 
	*/
	
	int numero;
	
	printf("Digite um número inteiro:");
	scanf("%d", &numero);
	
	if(numero % 2 == 0) {
		printf("O número é par. \n");
		
		if(numero > 15) {
			printf("O número é maior que 15");
		} else {
			printf("O número menor que 15");
		}
	} else {
		printf("O número é ímpar. \n");
		
		if(numero < 50) {
			printf("O número é menor que 50.");
		} else {
			printf("O número é maior que 50");
		}
	}	
}
