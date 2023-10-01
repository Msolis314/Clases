#include <stdio.h>
int main() {
	int current_num, index = 0 , numeros[10000],suma;
	do { 
		printf("Digite un numero:\n");
		scanf("%d",&current_num);
		numeros[index] = current_num;
		index++;
	} while ( current_num >= 0 );
	int i;
	int size = sizeof(numeros)/sizeof(numeros[0]);
	for ( i = 0 ; i < index ; i++ ) {
		suma += numeros[i];
	}
	float sum;
	sum = (float)suma;
	float promedio = sum / (index-1) ;
	printf("%.2f\n", promedio);
	return 0;

}
