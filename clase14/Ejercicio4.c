#include <stdio.h>

int Count_vowels( char *string1 ) {
	char abc[] = "aeiou";
	int i;
	int result;

	while ( *( string1 + i) != '\0' ) {
		for ( int count = 0 ; count < 5 ; count ++) {
			if ( *(string1 +i ) == *(abc +count) ) {
				result++;
				break;

			}
		}
		i++;
	}
	return result;
}

int main() {

	char string[] = "Mariana Solis Gonzalez";
	char acb[] = "aeiou";

	int x = Count_vowels(string);

	printf("Numero vocales : %d\n" , x);
}
