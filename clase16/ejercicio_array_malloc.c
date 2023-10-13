#include <stdio.h>
#include <stdlib.h>

int main () {

	// Leer del usuario cuantos elementos tiene el array
	// Asignar memoria dinamica
	// Leer los numeros del array del input del usuario 
	// imprimir la lista 
	// Liberar memoria y apuntar puntero a null
	printf("Cual es el size del arreglo:\n");
	int tam; 
	scanf("%d", &tam);

	int *array = ( int *)malloc( tam * sizeof(int));

	if ( array == NULL) {
		printf("Error\n");
		return -1;
	}

	for ( int i = 0 ; i < tam ; i++) {
		printf("Digite un numero:\n");
		int temp;
		scanf("%d" , &temp);

		*(array +i) = temp;
	}

	for ( int i = 0 ; i < tam ; i++) {
		printf("Elemento: %d\n", array[i]);
	}

	free(array);
	array = NULL;
	return 0;

}
