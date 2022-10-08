#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(0, "Portuguese");
	/*QUESTÃO 17)  O quadrado de um número natural n é dado pela soma dos n primeiros números ímpares 
	consecutivos. Por exemplo, 12=1, 22=1+3, 32=1+3+5, 4
	2=1+3+5+7, etc. Dado um número n, 
	calcule seu quadrado usando a soma de ímpares ao invés de produto.
	*/	
	int numero, contador;
	
	printf("Digite um número inteiro:");
	scanf("%d", &numero);
	
	int dobroNumero = numero * 2;
	
	printf("%d² = ", numero); 
	for(contador = 1; contador < dobroNumero; contador++) {
		if(contador % 2 != 0 && contador < dobroNumero - 1) {
			printf("%d + ", contador);		
		} else if (contador % 2 != 0 && contador == dobroNumero - 1) {
			printf("%d", contador);
		}
	}
}
