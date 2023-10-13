#include <stdio.h>

void encontrarMinMax (int *arreglo, int *minimo, int *maximo, int longitud) {
	*minimo = *arreglo;
	
	*maximo = *arreglo;
	
	for ( int i = 1; i < longitud; i++) {
		// if arreglo [i] > maximo => maximo arrgelo[i]
		if ( *(arreglo+i) > *maximo ) {
			*maximo = *(arreglo+i);
		}
	}
}
int main() {
	int arreglo[] = {12,4,56,78,9,23};
	int min,max;
	int longitud = sizeof(arreglo)/sizeof(arreglo[0]);

	printf("Longitud del array: %d \n", longitud);

	encontrarMinMax(arreglo, &min,&max, longitud);
	printf("max: %d \n",max);
}
