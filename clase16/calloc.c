#include <stdlib.h>
#include <stdio.h>

int main() {
	// Reservar memoria para 1 int
	//Heap
	//1. Reservamos memoria en el heap con malloc
	//2. Casteamos el puntero retornado al tipo de dato
	int *ptr = (int *)malloc(1*sizeof(int));
	int *arr;
	int n = 5;

	arr = (int *)calloc( n , sizeof(int));

	//3. Revisamos que el puntero no sea NULL
	if ( ptr == NULL) {
		printf("Error: No se pudo reservar memoria en el heap\n");
		return 1;

	}

	for( int i = 0 ; i < n ; i++) {
		printf("Element %d\n" , arr[i]);
	}

	

	

	//4. Liberar memoria
	free(arr);
	arr = NULL;
	return 0;
}
