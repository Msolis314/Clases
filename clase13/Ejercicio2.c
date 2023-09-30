#include <stdio.h>
int decenas(int numero) {
	int count = 0;
	float x = numero ;
	do { 
		x = x / 10;
		count++;
	}
       	while ( x >=10 );
	return count;

}
int reverse(int numero, int dec ) {
	int addit = numero % 10;
	numero = numero / 10;
	if ( numero < 10 ) {
		return numero;
	}
	return addit*10*dec + reverse( numero, dec -1);
}
int main() {
	int num; 
	printf("Digite un numero:\n");
	scanf("%d",&num);
	int result = decenas( num );
	printf("%d\n",result);
	int num_reverse = reverse( num , result);
	printf("%d\n", num_reverse);
	return 0;
}
