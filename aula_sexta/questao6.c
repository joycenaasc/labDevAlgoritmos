#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(0, "Portuguese");
	
	/*QUEST�O 6)  Fa�a um programa que l� o pre�o de um produto e inflaciona esse pre�o em 10% se ele 
	for menor que 100 e em 20% se ele for maior ou igual a 100. OBS: n�o use o comando "if" 
	ou o operador de condi��o "?"*/
	
	float valor, menor100, maior100;
	
	printf("Digite o valor do produto:");
	scanf("%f", &valor);
	menor100 = valor * 1.1;
	maior100 = valor * 1.2;
	
	while(valor < 100) {
		printf("O valor final �: %f", menor100);
		break;
	}
	
	while(valor >= 100) {
		printf("O valor final �: %f", maior100);
		break;
	}
}
