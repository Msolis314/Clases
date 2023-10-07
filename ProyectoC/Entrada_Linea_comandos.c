#include <stdio.h>
#include <string.h>
/*Esta parte se encarga de validar las entradas desde la linea de comandos
 *
 *
 *
 * */

//Defino este enum para poder usar las expresiones True y False a lo largo del codigo
enum True_False { True = 0 , False = 1 };

// Funcion para comparar 2 strings
int Compare_Strings( char *string1 , char *string2) {
	enum True_False result = True;
        int  counter=0;
	//La condicion del while es que mientras no se llegue al final de una de las strings siga comparando
       	while ( *(string1 + counter) != '\0' && *(string2 +counter) != '\0') {
		//Apenas se llegue a una diferencia devuelve el valor de Falso
		if ( *(string1 + counter) != *(string2 +counter) ) {
			result = False;
			return result;
		}
		counter++;
	}
	//Si se ejecuta todo el while las strings son iguales
	return result;

}


enum Posible_Flag_Num { HELP = 2 , IMAGE = 6 };
// Solo hay 2 numeros posibles de flags, si se entran menos o mas deberia dar error

// Tiene por argumentos el numero de entradas de la linea, el array con las entradas y los array donde se va a guardar las informacion
int Flag_Identifier(  int num_argc, char *argv[] , char *path_entrada , char *path_salida , char *transformacion ) {
	if ( num_argc > 6 || num_argc < 1 ) {
		printf("Numero invalido de argumentos\n");
		return False;
	}

	switch ( num_argc ) {
		case HELP:
      // Si se ingresa solo un argumento debe ser el de help de otra manera es un error
			if ( strcmp( argv[1] , "-help" ) == True || strcmp( argv[1] , "-h" ) == True) {
				printf("Help\n");
				return True;
			} else {
				printf("Flag invalido\n");
				return False;
			}
			break;
		case IMAGE:
			for ( int i = 1; i < num_argc ; i++ ) {
			       	if ( strcmp( *(argv + i) , "-i") == True ) {
					path_entrada = *(argv + i + 1);
					//Aqui se debe checkear si el directorio existe
				       	//quiero que se salte a la otra iteracion
					i+=1;
			 	} else if ( strcmp( *(argv + i) , "-o") == True) {
					path_salida = *(argv + i +1);
					//Aqui se debe checkear si el directorio existe
					//quiero que se salte a la otra iteracion
					i+=1;
				} else if (  strcmp( *(argv + i), "-r") == True) {
					transformacion = *(argv +i);
				} else {
					printf("Flag no valido, Error\n.");
					return False;
				}
			}
			return True;
			break;
		default:
			printf("Entrada no valida, ver -help\n");
			return False;
	}
}
int main(int argc, char *argv[]) {
        //printf("%s\n", argv[1]);
	char path[20] , out[20] , transform[20];

	//char probe[] = "-help";
	//int y = strcmp( argv[1] , probe);
	//printf("%d\n",y);

	int x = Flag_Identifier( argc   , argv , path , out, transform);
	printf("%d\n",x);
    

        return 0;
}
