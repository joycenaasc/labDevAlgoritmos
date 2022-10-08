#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(0, "Portuguese");
	//QUESTÃO 15) Faça um programa que mostre todos os números pares existentes entre 1 e 50.
	
	
	int contador;
	
	for(contador = 0; contador < 2; contador++) {
		printf("Todos os números pares existentes entre 1 e 50 são: \n");
		for(contador = 2; contador < 50; contador++) {
			if(contador % 2 == 0) {
			printf("%d \n", contador);	
			}
		}
	}
}
