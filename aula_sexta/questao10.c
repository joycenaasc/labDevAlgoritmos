#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(0, "Portuguese");
	/*QUEST�O 10) Fa�a um programa que receba um n�mero inteiro e que verifique se esse n�mero � par 
	ou �mpar. O programa deve informar se o n�mero � par, caso afirmativo informar tamb�m se 
	� ou n�o maior que 15 ou se o n�mero � �mpar, caso afirmativo informar se � ou n�o menor 
	que 50. 
	*/
	
	int numero;
	
	printf("Digite um n�mero inteiro:");
	scanf("%d", &numero);
	
	if(numero % 2 == 0) {
		printf("O n�mero � par. \n");
		
		if(numero > 15) {
			printf("O n�mero � maior que 15");
		} else {
			printf("O n�mero menor que 15");
		}
	} else {
		printf("O n�mero � �mpar. \n");
		
		if(numero < 50) {
			printf("O n�mero � menor que 50.");
		} else {
			printf("O n�mero � maior que 50");
		}
	}	
}
