#include <stdio.h>

int Recursivefun( int n) {
	if ( n <= 0 ) {
		return 1;
	}

	return n * Recursivefun( n -1 );

}

int main () {
	int x = Recursivefun(8);
	printf("%d\n", x);
}
