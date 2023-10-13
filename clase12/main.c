#include <stdio.h>

//Este header file

#include "suma.h"
extern  int varG;
/*
 * {
 * a
 * } Variable local 
 * */

void  static_test() {
	static int  val = 10;
	printf("Static variable valiue: %d",val);
	val++;
}
int main () {
	
	int res = sum(5,3);
	printf("Result: %d\n %d ", res,varG);
	static_test();
	static_test();

	return 0;
}
