#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(0, "Portuguese");
	/*QUEST�O 14)  convers�o de graus Fahrenheit para Celsius � obtida por Tc={(Tf-32)x(5/9)}, em que Tc 
	� a temperatura em Celsius e Tf em Fahrenheit. Fa�a um programa C que calcule e que 
	imprima uma tabela de graus Fahrenheit e graus Celsius, cujos graus variem de 40 a 75, de 
	1 em 1.
	*/
	 
	int tf, tc;
	
	for(tc = 40; tc <= 75; tc++) {
		
		tf = tc * 9 / 5 + 32;
		printf("Celsius: %d  Fahrenheit: %d \n", tc, tf);
	}
}
