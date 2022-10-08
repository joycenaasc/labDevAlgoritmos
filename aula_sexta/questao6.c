#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(0, "Portuguese");
	
	/*QUESTÃO 6)  Faça um programa que lê o preço de um produto e inflaciona esse preço em 10% se ele 
	for menor que 100 e em 20% se ele for maior ou igual a 100. OBS: não use o comando "if" 
	ou o operador de condição "?"*/
	
	float valor, menor100, maior100;
	
	printf("Digite o valor do produto:");
	scanf("%f", &valor);
	menor100 = valor * 1.1;
	maior100 = valor * 1.2;
	
	while(valor < 100) {
		printf("O valor final é: %f", menor100);
		break;
	}
	
	while(valor >= 100) {
		printf("O valor final é: %f", maior100);
		break;
	}
}
