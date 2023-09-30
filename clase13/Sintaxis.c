#include <stdio.h>

enum Days {
	 Monday = 1, 
	 Friday =2
};

int main () {
	enum Days Favorite = Monday;
	printf("%d\n", Favorite);

	int x =5 , y =10 ;

	if ( x < y && y %2 ==0) {
		printf("x is less than y, and y is even.\n");

	}
	return 0;
}
