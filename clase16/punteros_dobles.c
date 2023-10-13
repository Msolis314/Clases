#include <stdio.h>
#include <stdlib.h>


void asignarValor( **ptr) {

	int valor = 42;
	*ptr = &valor;
}
int main () {

	int *p = NULL;

	asignarValor(&p);
}
