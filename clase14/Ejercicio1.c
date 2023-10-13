#include <stdio.h> 
/*intercambiar los valores de dos variables atraves de punteros */
void intercambio( int *ptrx, int * ptry) {
	int temp = *ptrx;
	*ptrx = *ptry;

	*ptry = temp;
}
int main() {
	int x = 5 ; 
	int y = 10 ;

	printf("Antes del intercambio: x = %d y = %d \n",x,y);
	intercambio(&x,&y);

	printf("Despues del intercambio: x = %d y = %d \n",x,y);
	return 0;
}
