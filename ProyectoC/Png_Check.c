#include <png.h>
#include <stdio.h>
#include <string.h>

#define Png_Bytes 4
int Check_Png( char *path ) {

	FILE *fp; 
	char buf[4];
	fp = fopen( path , "rb");
	fread(buf , 1 , 4 , fp );
	return(! png_sig_cmp(buf ,(png_size_t)0 , 4 ));

}

int main() {
	int x = Check_Png( "dog.png");
	printf("%d\n",x);
}
