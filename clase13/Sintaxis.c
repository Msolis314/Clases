#include <stdio.h>

enum Days {
	 Monday = 1, 
	 Friday =2
};

enum Color { RED, GREEN, BLUE };

int main () {
	enum Days Favorite = Monday;
	printf("%d\n", Favorite);

	int x =5 , y =10 ;
	//Ejemplo if
	if ( x < y && y %2 ==0) {
		printf("x is less than y, and y is even.\n");

	}

	// Ejemplo Operador condicional
	
	int num = 10;
	char* result = (num %2 == 0) ? "Par" : "Impar";
	printf("%d es %s. \n", num , result);

	// Ejemplo Switch
	enum Color chosenColor = GREEN;

	switch (chosenColor) {
		case RED:
			printf("You chose red.\n");
			break;
		case GREEN:
			printf("You chose green.\n");
			break;
		case BLUE:
			printf("You chose blue.\n");
			break;
		default:
			printf("Invalid choice.\n");
	}

	// Ejemplo while
	int contador = 1;

	while (contador <= 5) {
		printf("iteracion %d \n " , contador);
		contador++;
	}

	//Ejemplo do-while
	//
	do {
		printf("Iteracion %d \n" , contador);
		contador ++;
	} while (contador <= 10);
	return 0;
}
