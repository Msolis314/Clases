#include <stdio.h>

int main() {
	int x = 5;
	int *ptr = &x;
	printf("%p\n", *(void) ptr);
}

