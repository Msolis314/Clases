#include <stdio.h>
#include <stdlib.h>

int *crear_memoria() {
	int valor = 42;
	int *ptr = &valor;
	return ptr;
}

int main() {
	int *ptr1 = crear_memoria();
	printf("Valor en ptr1: %d\n", *ptr1);
	return 0;
}
