#include<stdio.h>

void cambiar ( int *a) {
	*a = 10;
}

int main () {
	int a = 5;
	cambiar(&a);
	printf("a:%d\n", a);
	return 0;
}
