#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(0, "Portuguese");
	/*QUESTÃO 7) Implemente um programa que solicita as notas das duas provas feitas por cada um dos 
	alunos de uma turma (as notas têm de estar no intervalo [0 10]) e imprime para cada um a 
	média das notas. O programa deve parar imediatamente após ter sido digitado o valor 50 para 
	a nota da primeira prova.*/
	
	float primeiraNota, segundaNota;
	
	printf("Digite sua primeira nota:");
	scanf("%f", &primeiraNota);
	
	if(primeiraNota >= 0  && primeiraNota <= 10){
			printf("Digite sua segunda nota:");
			scanf("%f", &segundaNota);
			if(segundaNota >= 0 && segundaNota <= 10) {	
				printf("Sua média é: %f", (primeiraNota + segundaNota) / 2);
			}
	}
	
	if(primeiraNota == 50) {
		printf("Não é possível continuar");
	}
}
