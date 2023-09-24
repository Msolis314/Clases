#include <stdio.h>

struct Estudiante {
	char  nombre[50];
	int carnet;
	int notas[5];
};

int main() {
	struct Estudiante estudiante1;
	printf("Ingrese el nombre\n");
	scanf("%s",estudiante1.nombre);
	// printf("Ingrese el carnet\n");
	// scanf("%d", estudiante1.carnet);
	printf("Ingrese las 5 notas\n");
	
	int sum = 0;
	for ( int  i = 0; i < 5 ; i++) {
		scanf( "%d", &estudiante1.notas[i] );
		sum = sum + estudiante1.notas[i];
	};

	float promedio = sum / 5.0;
	printf("Promedio = %.2f\n",promedio);

	int suma = 0;
	for ( int i = 0; i < 5 ; i++) {
		 suma = suma + estudiante1.notas[i];
		

	};
	 printf( "%d\n", suma);

	//float promedio =  suma / 5;
	printf("Promedio = %.2f\n",promedio);
	return 0;
}
