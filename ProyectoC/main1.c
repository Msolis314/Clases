#include <stdlib.h>
#include <stdio.h>
#include <png.h>
#include "declaraciones.h"

int main(int argc, char *argv[]) {

        char path[35] , out[35] , transform[4];

        //strcpy(path, *(argv +2));
        //printf("%s\n",path);

        int x = Flag_Identifier( argc   , argv , path , out, transform);
       
        if ( x == False ) {
                exit(False);
        } else {
                printf("El programa continua\n");
        }

        return 0;
}

