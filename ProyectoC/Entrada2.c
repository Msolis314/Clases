#include <stdio.h>
#include <stdlib.h>
enum True_False { True = 1 , False = 0 };

int Compare( char *string1 , char *string2) {
	enum True_False result = True;
        int  counter=0;
       	while ( *(string1 + counter) != '\0' && *(string2 +counter) != '\0') {
		if ( *(string1 + counter) != *(string2 +counter) ) {
			result = False;
			return result;
		}
		counter++;
	}
	return result;	
	
}
enum Posible_Flag_Num { HELP = 1 , IMAGE = 5 };

int Flag_Identifier( char *flag, int num_argc, char *argv[] , char *path_entrada , char *path_salida ) {
	if ( num_argc >5 ) {
		printf("Numero invalido de argumentos\n");
		return False;		
	}

	char help[] = "-help";
	char h[] = "-h";
	char path[] = "-i";
	char destiny[] = "-o";
	char transform[] = "-r";
	int x = Compare (flag , path);
	printf("%d\n",x);
	printf("%s\n",flag);	
	switch ( num_argc ) {
		case HELP:
			if ( Compare( flag , help ) == 1 || Compare( flag , h ) == 1) {
				printf("Help\n");
				return False;
			} else { 
				printf("Flag invalido\n");
				return False;
			}
			break;
		case IMAGE:
			if ( Compare( flag , path ) == 1 ) {
				path_entrada = *( argv + 2);
			}
			return True;
			break;
		default: 
			printf("MIstke\n");
			return False;
			 

	}
	return True;


}
int main(int argc, char *argv[]) {
        printf("%s\n", argv[2]);
	char path[20] , out[20];


	int x = Flag_Identifier( argv[1] , argc -1 , argv , path , out);
	printf("%d\n",x);
    

        return 0;
}

