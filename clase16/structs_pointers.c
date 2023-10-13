#include <stdlib.h>

#include <stdio.h>


struct Nodo {
	int dato; 
	struct Nodo = siguiente;
}

int main() {
	struct Nodo *lista = NULL;

	lista = (struct Nodo *)malloc(sizeof( struct Nodo));
	if (lista == NULL ) {
		printf("No hay mem\n");
		return 1;
	}

	lista -> dato = 5;
	lista -> siguiente = NULL;

	free(lista);
	lista = NULL;


}
