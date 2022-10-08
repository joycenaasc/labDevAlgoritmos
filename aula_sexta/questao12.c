#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(0, "Portuguese");
	/*QUESTÃO 12) Desenvolva um programa para comparar a idade de Pedro, de Joana e de Ismael e
	informar quem é o mais velho. Considere que essas pessoas possuem idades diferentes.
	*/
	
	int idadePedro, idadeJoana, idadeIsmael;
	
	printf("Pedro, digite sua idade:");
	scanf("%d", &idadePedro);
	
	printf("Joana, digite sua idade:");
	scanf("%d", &idadeJoana);
	
	printf("Ismael, digite sua idade:");
	scanf("%d", &idadeIsmael);
	
	if(idadePedro > idadeJoana && idadePedro > idadeIsmael) {
		printf("Pedro é o mais velho de todos.");
	} else if(idadeJoana > idadePedro && idadeJoana > idadeIsmael) {
		printf("Joana é a mais velha de todos.");
	} else if(idadeIsmael > idadePedro && idadeIsmael > idadeJoana) {
		printf("Ismael é o mais velho de todos.");
	} 
}
