#include <stdio.h>

int main() {
	int choice = 0; 
	printf("Digite un numero:\n");
	scanf("%d", &choice);

	if ( choice % 5 == 0 && choice % 7 == 0) {
		printf("Multiplo de 5 y 7.\n");
	}
}
