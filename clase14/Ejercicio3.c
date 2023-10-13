#include <stdio.h> 

int main() {
	printf("Digite un numero:\n");
	int num;
	scanf("%d", &num);

	printf("Que posicion desea comprobar:\n");

	int position;
	scanf("%d", &position);
	int a = 1;

	int result = ( a << position-1 & num ) ? 1 : 0;

	printf("Bit es : %d \n", result);

}
