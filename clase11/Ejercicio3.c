#include <stdio.h>

int search( int num , int *lista[] ) {
	int tam = sizeof(lista) / sizeof(lista[0]);
	int result = -1;
	for ( int i = 0; i < tam ; i++) {
		if ( sizeof(num) == sizeof(lista[i]) ) {
			return i;
			break;
		}
	}
	if ( result == -1) {
		return result;
	}
}
int main () {
	int arr[] = {2,4,6,8,10,12,14,16};
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("Digite un numerito:\n");
	int choice = 0 ;
	scanf( "%d" , &choice);
	int result = 0;
        for ( int i = 0; i < size ; i++) {
		if ( arr[i] == choice ) {
			printf("Encontre el valor en el indice %d \n", i);
			result = 1;
			break;

		}

	}	
	if ( result == 0) {
		printf(" El resultado no fue encontrado\n");
	}

	int x = search( choice ,*arr );
	printf("%d", x);
}
