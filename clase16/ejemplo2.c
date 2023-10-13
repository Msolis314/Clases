#include <stdio.h>

#include<stdlib.h>

int main () {
	int filas = 3; 
	int columnas = 5; 

	int **matriz = ( int **)malloc(filas*sizeof(int *));

	if ( matriz == NULL ) {
		printf("Error reservando memoria\n");
		return -1;
	}

	for ( int i = 0 ; i < filas ; i++) {
		matriz[i] = (int *)malloc( columnas * sizeof(int));
	}

	for ( int i = 0; i< filas; i++) {

		free(matriz[i]);
	}

	free(matriz);

	return 0;

}
