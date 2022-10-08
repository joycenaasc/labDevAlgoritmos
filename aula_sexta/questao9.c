#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(0, "Portuguese");
	/*quest�o 9)  Escreva um programa que leia 3 notas de um aluno e a m�dia (ME) das notas dos 
	exerc�cios realizados por ele. Calcular a m�dia de aproveitamento, usando a f�rmula: MA = 
	(N1 + N2*2 + N3*3 + ME)/7. A partir da m�dia, informar o conceito de acordo com a tabela:
	(0,1)
	maior ou igual a 9 A
	maior ou igual a 7.5 e menor que 9 B
	maior ou igual a 6 e menor que 7.5 C
	maior ou igual a 4 e menor que 6 D
	menor que 4 E
	*/
	
	float nota1, nota2, nota3, ME, MA;
	
	printf("Digite sua primeira nota:");
	scanf("%f", &nota1);
	
	printf("Digite sua segunda nota:");
	scanf("%f", &nota2);
	
	printf("Digite sua terceira nota:");
	scanf("%f", &nota3);
	
	ME = (nota1 + nota2 + nota3) / 3;
	
	MA = (nota1 + nota2 * 2 + nota3 * 3 + ME) / 7;
	 
	if(MA < 4) {
		printf("Seu boletim �: E");
	} else if(MA >= 4 && MA < 6) {
		printf("Seu boletim �: D");
	} else if(MA >= 6 && MA < 7.5) {
		printf("Seu boletim �: C");
	} else if(MA >= 7.5 && MA < 9) {
		printf("Seu boletim �: B");
	} else {
		printf("Seu boletim �: A");
	}
}
