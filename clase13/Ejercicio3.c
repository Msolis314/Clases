#include <stdio.h>

enum Operaciones {
	Suma,
	Resta,
	Multi,
	Div
};

int Calculadora(int num1, int num2, int choice) {
	switch (choice) {
		case 1:
			return num1 + num2;
			break;
		case 2:
			printf("Cual desea restar primero:\n 1) num1\n 2) num2\n");
			int choice_resta;
			scanf("%d",&choice_resta);
			if ( choice_resta == 1 ) {
				return num1 - num2;
			} else if ( choice_resta == 2) {
				return num2-num1;
			} else {
				return num2 - num1;
			}
			break;
		case 3:
			return num1*num2;
			break;
		case 4:
			return num1/num2;
			break;
	}
}

int main() {
	printf("Digite un numero\n");
	int a;
	scanf("%d",&a);
	printf("Digite otro numero\n");
	int b;
	scanf("%d", &b);

	printf("Que operacion desea realizar:\n");
	printf("1)Suma \n 2)Resta \n 3)Multi \n 4)Div \n ");
	int  Elec;
	scanf("%d",&Elec);

	int result = Calculadora( a , b , Elec);
	printf(" El resultado es %d \n", result);

	return 0;

}
