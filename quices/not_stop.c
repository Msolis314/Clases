#include <stdio.h> 

void cuenta_regresiva( int n) {
	printf("%d\n",n);
	cuenta_regresiva(n-1);
}

int main() {
	int inicio =10;
	printf("Iniciando cuenta regresiva desde %d:\n", inicio);
	cuenta_regresiva(inicio);
	return 0;
}
