#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(0, "Portuguese");
	//QUEST�O 15) Fa�a um programa que mostre todos os n�meros pares existentes entre 1 e 50.
	
	
	int contador;
	
	for(contador = 0; contador < 2; contador++) {
		printf("Todos os n�meros pares existentes entre 1 e 50 s�o: \n");
		for(contador = 2; contador < 50; contador++) {
			if(contador % 2 == 0) {
			printf("%d \n", contador);	
			}
		}
	}
}
