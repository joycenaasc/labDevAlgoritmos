#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(0, "Portuguese");
    /*
	Quest�o 13)
	Dado um n�mero positivo, crie um programa que escreva todos os n�meros �mpares 
	menores e/ou iguais a esse n�mero e maiores ou igual a um.
	*/
    
	int numero, contador;
    
    printf("Digite um n�mero positivo: \n");
    scanf("%d", &numero);
	
	for(contador = 1; contador <= numero; contador++) {
		if(contador % 2 != 0) {
			printf("%d ", contador);
		}
	}
}
