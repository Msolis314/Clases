#include <stdio.h>
void Sort ( int *array, int size ) {
	for ( int i = 0 ; i <size ; i++) {
		int temp = *(array + i);
		if ( temp > *(array + i +1) ) {
			*(array +i ) = *(array +i +1);
			*(array +i +1) = temp;
		}
	}
}

int main() {
	int arr[] = { 45, 67 ,778 ,1 ,4, 98 };
	int lenght = sizeof(arr)/sizeof(arr[0]);
	Sort(arr, lenght-1);

	printf("%d\n" , arr[0]);
	
}
