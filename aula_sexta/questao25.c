#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(0, "Portuguese");
	/*QUEST�O 25) Fa�a um programa que l� um conjunto de 10 valores inteiros e verifica se algum dos 
	valores � igual a m�dia dos mesmos
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
			printf("O n�mero %d � igual a m�dia dos valores informados \n", valores[contador]);
		}
	}
}
