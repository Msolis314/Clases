#include <stdio.h>
#include <stdlib.h>

int main() {
	int num_rand = rand(),adv;
	printf("%d\n", num_rand);
	do {
		printf("Adivine mi numerito:\n");
		scanf("%d", &adv);

	} while ( adv != num_rand);
	printf("Adivino\n");
	return 0;
}
