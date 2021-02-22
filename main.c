#include "stdio.h"
#include "stdlib.h"

int main(int argc, char** argv) {

	int a[1000];
	int i, Q_elem_a;

	for (i = 1; i < argc; i++) {
		a[i - 1] = atoi(argv[i]);
		fprintf(stderr, "%d ", a[i - 1]);
	}
	fprintf(stderr, "\n");
	Q_elem_a = argc - 1;

	// Não modifique o código acima

	// Codifique o algoritmo Bubble Sort para  
	// ordenar em ordem crescente apenas os
	// elementos ímpares do vetor de
	// int a[], o qual possui Q_elem_a elementos.
	// Durante a ordenação cada um dos elementos pares
	// devem permanecer na sua posição original
	// no vetor a[]. Apenas os elementos ímpares
	// serão movidos durante o processo de ordenação.
	// Crie seu código abaixo:


	
	// A saída deve ser para a stdout e deve ser na forma de 
	// uma string contendo os elementos do vetor ordenado  
	// serados por um espaço entre eles.
	// O último caractere da string deve ser o pula linha '\n'. 
	// Exemplo: "<elem1>< ><elem2>< > ... < ><elemN><\n>"
	// <  > e ... servem para representar os componentes da string
	// e não devem ser impressos.
	// Crie a saída para o programa de testes automático aqui:

	

	// Não modifique o código abaixo

	return 0;
}

