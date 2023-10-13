#include <stdio.h>
int impStrlen(char *str) {
	/*int len = 0;
	while ( *(str +len ) != '\0' ) {
		len++;
	}*/
	char *s = str;
	while (*s) {
		s++;
	}

	return s -str;
}
int main() {
	char str[] = "Esto es un string";

	int lenght =impStrlen(str);

	printf("Longitud del string: %d\n", lenght);
}
