#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(0, "Portuguese");
    /*
	Questão 13)
	Dado um número positivo, crie um programa que escreva todos os números ímpares 
	menores e/ou iguais a esse número e maiores ou igual a um.
	*/
    
	int numero, contador;
    
    printf("Digite um número positivo: \n");
    scanf("%d", &numero);
	
	for(contador = 1; contador <= numero; contador++) {
		if(contador % 2 != 0) {
			printf("%d ", contador);
		}
	}
}
