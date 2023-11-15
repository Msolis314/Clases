#include <stdio.h>

int main() {
	FILE* archivo;

	archivo = fopen("ejemplo.txt" , "w");

	if ( archivo == NULL ) {
		printf("Error al abrir el archivo");
		return 1;
	}
	char text[] = "Hola ejemplo";

	fprintf( archivo , "%s" , text);
	fclose(archivo);
	//volvemos a abrir el archivo 
	
	archivo = fopen("ejemplo.txt" , "r");
	if (archivo == NULL ) {
		printf("Error abriendo el archivo\n");
		return 1;
	}

	//Leer el archivo caracter por caracter hasta EOF
	//
	char caracter;

	while (( caracter == getc(archivo)) != EOF) {
		putchar(caracter);
	}
	fclose(archivo);

	archivo = fopen("sample.bin" , "wb");

	if (archivo == NULL ) {
                printf("Error abriendo el archivo\n");
                return 1;
        }

	//utilizar putc para escribir en el binario
	putc("A" , archivo);

	fclose(archivo);

	return 0;
}
