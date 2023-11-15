#include <png.h>

enum True_False { True = 0 , False = -1 };
int Not_PNG( char *path );
int Exist_Dir( char *path );
int Flag_Identifier(  int num_argc, char *argv[] , char *path_entrada , char *path_salida , char *transformacion );
void Png_Write ( char *path_salida , png_bytep *newarray );
