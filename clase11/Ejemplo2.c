#include <stdio.h>

int main () {
	int arr[] = {1,5,2,10};
	int size = sizeof(arr) / sizeof(arr[0]);
	//sizeof da el size en bits si se divide el del arreglo entre el de cada elemento da el numero de elementos en el arreglo
	int min = arr[0];
	int max = arr[0];

	for ( int  i=1; i < size; i++) {
		if ( arr[i] < min ) {
			min = arr[i];
		}
		if ( arr[i] > max ) {
			max = arr[i];
		}
	}

	printf(" Max : %d \n", max);
	printf(" Min : %d \n", min);
}
