#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(0, "Portuguese");
	/*QUESTÃO 14)  conversão de graus Fahrenheit para Celsius é obtida por Tc={(Tf-32)x(5/9)}, em que Tc 
	é a temperatura em Celsius e Tf em Fahrenheit. Faça um programa C que calcule e que 
	imprima uma tabela de graus Fahrenheit e graus Celsius, cujos graus variem de 40 a 75, de 
	1 em 1.
	*/
	 
	int tf, tc;
	
	for(tc = 40; tc <= 75; tc++) {
		
		tf = tc * 9 / 5 + 32;
		printf("Celsius: %d  Fahrenheit: %d \n", tc, tf);
	}
}
