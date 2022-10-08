#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
	setlocale(0, "Portuguese");
	//questão 20) Crie um programa capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética

	
	int i, j;
	char nomes[2][20], aux[20];

	for (i = 0; i < 2; i++) {
	   printf("\nInforme seu nome principal sem letras maiúsculas: ", i+1);
	   scanf("%s", nomes[i]);
	}
	
	
	for (i = 1; i < 2; i++) {
	   for (j = 1; j < 2; j++) {
	      if (strcmp(nomes[j - 1], nomes[j]) > 0) {
	         strcpy(aux, nomes[j - 1]);
	         strcpy(nomes[j - 1], nomes[j]);
	         strcpy(nomes[j], aux);
	      }
	   }
	}

	for (i = 0; i < 2; i++)
	   printf("\n%s", nomes[i]);
}
