#include <stdio.h>

int globalvar = 6;
int global2 = 9;
void print_global () {
	printf("%d\n",globalvar);

}

void Static_test () {
	static int a = 9;
	printf("%d\n",a);
	a = a +2;

}
int main () {

	print_global();
	int globalvar = 50;
	printf("%d\n",globalvar);
	Static_test();
	Static_test();
	printf("%d\n",global2);
	return 0;
}
