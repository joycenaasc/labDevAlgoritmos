#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(0, "Portuguese");
	/*QUEST�O 17)  O quadrado de um n�mero natural n � dado pela soma dos n primeiros n�meros �mpares 
	consecutivos. Por exemplo, 12=1, 22=1+3, 32=1+3+5, 4
	2=1+3+5+7, etc. Dado um n�mero n, 
	calcule seu quadrado usando a soma de �mpares ao inv�s de produto.
	*/	
	int numero, contador;
	
	printf("Digite um n�mero inteiro:");
	scanf("%d", &numero);
	
	int dobroNumero = numero * 2;
	
	printf("%d� = ", numero); 
	for(contador = 1; contador < dobroNumero; contador++) {
		if(contador % 2 != 0 && contador < dobroNumero - 1) {
			printf("%d + ", contador);		
		} else if (contador % 2 != 0 && contador == dobroNumero - 1) {
			printf("%d", contador);
		}
	}
}
