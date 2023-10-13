#include <stdio.h>

int suma( int arr[] , int size , int i) {
	if ( i >= size ) {
		return arr[i];
	}
	return arr[i] + suma( arr,size, i +1 );

}

int main () {
	int val[] = {1,2,3,46,7};
	int tam = sizeof(val)/sizeof( val[0]);
	int result = suma(val,tam,0);
	printf("%d\n", result);
}
