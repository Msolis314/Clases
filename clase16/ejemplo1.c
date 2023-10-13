#include <stdlib.h>
#include <stdio.h>

int main() {
	// Reservar memoria para 1 int
	//Heap
	//1. Reservamos memoria en el heap con malloc
	//2. Casteamos el puntero retornado al tipo de dato
	int *ptr = (int *)malloc(1*sizeof(int));

	//3. Revisamos que el puntero no sea NULL
	if ( ptr == NULL) {
		printf("Error: No se pudo reservar memoria en el heap\n");
		return 1;

	}

	int *ptr_stack;
	int var = 5;
	ptr_stack = &var;

	*ptr = 5;
	printf("Valor de variable en el heap: %d \n", *ptr);

	//4. Liberar memoria
	free(ptr);
	ptr = NULL;
	return 0;
}
