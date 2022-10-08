#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(0, "Portuguese");
	/*QUESTÃO 11) Codifique um programa que leia a quantidade de alunas e de alunos. Depois esse 
	programa deve informar se essa turma possui mais alunos ou mais alunas. Se essa turma 
	possuir a quantidade de alunas maior que a de alunos, informe o total de alunos dessa turma.
	O programa deve verificar se a quantidade de alunos é igual a de alunas.
	*/
	
	int alunas, alunos, total;
	
	printf("Informe a quantidade de alunas da sala: \n");
	scanf("%d", &alunas);
	
	printf("Informe a quantidade de alunos da sala: \n");
	scanf("%d", &alunos);
	
	total = alunas + alunos;
	
	if(alunas > alunos) {
		printf("Essa turma possui mais alunas que alunos. \n");
		printf("O total de alunos da turma é: %d", total);
	} else if(alunos > alunas) {
		printf("Essa turma possui mais alunos que alunas.");
	} else {
		printf("a quantidade de alunos é igual a de alunas");
	}
}
