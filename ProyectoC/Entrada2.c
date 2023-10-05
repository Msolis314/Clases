#include <stdio.h>
#include <stdlib.h>
int Flag_Identifier( char *flag) {

}

int Compare( char *string1 , char *string2) {
	int result = 0, counter=0;
       	while ( *(string1 + counter) != '\0' && *(string2 +counter) != '\0') {
		if ( *(string1 + counter) != *(string2 +counter) ) {
			result = 1;
			return result;
		}
		counter++;
	}
	return result;	
	
}
int main(int argc, char *argv[]) {
        printf("%s\n", argv[1]);
	char string1[] = argv[1];
	char string2[] = argv[2];
	int x = Compare( string1, string2);
	printf("%d\n",x);
        for(int i =1 ; i < argc ; i++) {
                printf("%s\n es %d \n", argv[i] , i);
        }

        return 0;
}

