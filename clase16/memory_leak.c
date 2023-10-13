#include <stdlib.h>

void func() {
	int * p = (int *)malloc(sizeof(int));
}

int main() {
	func();
}
