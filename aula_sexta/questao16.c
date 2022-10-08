#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(0, "Portuguese");
	/*questão 16)  Dados um número natural n, exiba seu fatorial n!.*/
	
	int numero, contador;
	
	printf("Digite um número:");
	scanf("%d", &numero);
	

	for(contador = 0; contador < 2; contador++) {
		printf("%d! = ", numero);
		
		for(numero; numero >= 1; numero--) {
			if(numero > 1) {
			printf("%d * ", numero);
			} else {
				printf("%d", numero);
			}	
		}
		
		break;
	}
}
