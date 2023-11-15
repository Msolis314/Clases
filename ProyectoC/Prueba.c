#include <stdio.h>
#include<string.h>

int main( int argc , char *argv[]) {
	char string[] = "-help";
	printf( "%s\n" , argv[0]);
	int y = strcmp( argv[2] , string);
	printf("%d\n", y);
}
