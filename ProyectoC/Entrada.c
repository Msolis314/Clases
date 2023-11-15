#include <stdio.h>
#include <stdlib.h>
/*int Flag_Identifier( char flag) {

}*/
int main(int argc, char *argv[]) {
	printf("%s\n", argv[1]);
	for(int i =1 ; i < argc ; i++) {
		printf("%s\n es %d \n", argv[i] , i);
	}

	return 0;
}
