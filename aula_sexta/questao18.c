#include <stdio.h>


int main() {
	/*questão 18)  Faça um programa C que leia dez números que representam as notas de dez alunos de 
	uma disciplina. As notas variam de zero até dez (0 a 10). O programa deve validar a entrada 
	de dados e obter: a soma das notas, a média das notas, a maior nota, a menor nota. Assuma 
	que as notas são informadas corretamente no intervalo de 1 a 10.
	*/
	
	int contador, segContador;
	float mediaNotas, conjuntoNotas[10], somaNotas = 0, maiorNota = 0, menorNota;
	
	for(contador = 0; contador < 10; contador++) {
		printf("Digite uma nota entre 0 e 10:");
		scanf("%f", &conjuntoNotas[contador]);
		
		somaNotas += conjuntoNotas[contador];
	}
		
	printf("Soma das notas: %f \n", somaNotas);
	
	mediaNotas = somaNotas / 10;
	
	printf("A media das notas: %f \n", mediaNotas);
	
	for(contador = 0; contador < 10; contador++) {
		if(maiorNota > conjuntoNotas[contador]) {
			maiorNota = maiorNota;
		} else {
			maiorNota = conjuntoNotas[contador];
		}
	}
	
	menorNota = conjuntoNotas[segContador];
	
	for(segContador = 0; segContador < 10; segContador++) {
		if(menorNota < conjuntoNotas[segContador + 1]) {
			menorNota = menorNota;
		} else {
			menorNota = conjuntoNotas[segContador + 1];
		}
	}

	for(segContador = 0; segContador < 10; segContador++) {
		if(menorNota < conjuntoNotas[segContador]) {
			menorNota = menorNota;
		} else {
			menorNota = conjuntoNotas[segContador];
		}
	}
	
	printf("A maior nota tirada foi: %f \n", maiorNota);
	printf("A menor nota tirada foi: %f", menorNota);
}
