#include "stdio.h"
#include "stdlib.h"

int main(int argc, char** argv) {

	float a[1000];
	int i, Q_elem_a;

	for (i = 1; i < argc; i++) {
		a[i - 1] = atof(argv[i]);
		fprintf(stderr, "%.2f ", a[i - 1]);
	}
	fprintf(stderr, "\n");
	Q_elem_a = argc - 1;

	// N�o modifique o c�digo acima

	// Codifique o algoritmo Bubble Sort para  
	// ordenar em ordem crescente o vetor de
	// float a[], o qual possui Q_elem_a elementos.


	
	// A sa�da deve ser para a stdout e deve ser na forma de 
	// uma string contendo os elementos do vetor em ordem
	// crescente, serados por um espa�o entre eles.
	// O �ltimo caractere da string deve ser o
	// pula linha '\n'. 
	// Exemplo: "<elem1>< ><elem2>< > ... < ><elemN><\n>"
	// <  > servem para representar os componentes da string
	// e n�o devem ser impressos.
	// Os valores devem ser arredondados com 2 casas decimais.
	// Crie a sa�da para o programa de testes autom�tico aqui

	

	// N�o modifique o c�digo abaixo

	return 0;
}

