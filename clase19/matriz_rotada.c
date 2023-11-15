#include <stdio.h>
void rotarMatriz90 ( int *src , int *dest , int n) {
	int matrizRotada[n][n];
	for ( int i =0 ; i < n ; i++){
                for ( int j = 0 ; j <n ;  j++)  {
                       // matrizRotada[j][n-i-1] = matriz[i][j];
		       *(dest + j*n + (n -i -1))  = *(src + (i*n) + j);
		}
	}




}

void imprimir( int matriz[][3] , int n) {
	for ( int i =0 ; i < n ; i++){
		for ( int j = 0 ; j <n ;  j++)  {
			printf("%d\n" , matriz[i][j]);
		}
		printf("\n");
	}
}
int main() {

	int matrizOriginal[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	int n = 3 ; 

	printf("Matriz Original\n");

	int destMatrix[3][3];

	rotarMatriz90( (int *) matrizOriginal , (int *) destMatrix , n );
}
