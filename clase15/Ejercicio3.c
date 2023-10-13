#include <stdio.h>

#include <string.h>
/*
 *Que hace la funcion 
 *Que recibe
 *Que retorna
 * */

void invertir(char *str) {
	int length = strlen(str);
	char *start =  str;
	char * end = str = length -1 ;

	while (start < end) {
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

int main() {

	char str[] = "Esto es un string";

	printf("String original:%s\n" ,str);

	invertir();

	printf("String invertido %s\n",str);
}
