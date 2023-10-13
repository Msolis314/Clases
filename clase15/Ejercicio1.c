#include <stdio.h>

void  impStrcpy(char *dest, char *src) {
	//int len = sizeof(og)/sizeof( *og);
	/*for ( int i = 0 ; i < len ; i++) {
		*(src +i) = *(og +i);
	}*/

	while (( *dest++ = *src++));
}

int main() {
	char original[] = "Hola";
	char copia[15];

	impStrcpy(copia,original);

	printf("Original : %s \n" , original);
	printf("Copia : %s \n " , copia);
}
