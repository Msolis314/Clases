#include <stdio.h>
/*
 * Este programa imprime Hello World
 * */
/*
 * return_type nombre_funcion (argumento_tipo nombre_argumento,...) {
 * cuerpo
 * }
 * */
int suma(int a, int b) {
	return a + b;
}

struct Persona {
	char nombre[50];
	int edad;
};

enum Color {
	Rojo,
	Verde,
	Azul
};

/*
 *variableEjemplo
 *variable_ejemplo
 * */
union miUnion {
	int numero;
	float decimal;
	char letra;
};
typedef struct Persona PersonaSt;
int main() {
	int numbers[5] = {1,2,3,4,5};
	unsigned int ui = 100;
	short shorti = -1234;
	long long1 = 1234566778;
	long long long2 = 12334678;
	float floatv = 3.14;
	double doublev = 4.12344;
	PersonaSt Persona caro = {"Caro",15};
	//caro.nombre
	//caro.edad
	
	printf("Nombre: %s\n", caro.nombre);
	union miUnion u; 
	u.numero = 42;
	printf("Numero en el union %d\n",u.numero);
	// format identifiers
	printf("%u %hd %ld %lld %f %lf\n", ui ,shorti, long1, long2, floatv, doublev);
	for (int i=0; i<5; i++) {
		printf("numbers[%d] = %d\n",i, numbers[i]);
	}
	printf("Hello, World!\n");
	return 0;
}


