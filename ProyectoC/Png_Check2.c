#include <png.h>

#include <stdlib.h>
#include <stdio.h>

int Not_PNG( char *path ) {
	FILE *fp = fopen( path , "rb" );
        if (!fp) {
                return -1;
        }
        unsigned char header[8];

        if ( fread(header,1, sizeof(header), fp)< 8) {
                fclose(fp);
                return -1;
        }
        if ( png_sig_cmp(header,0,8) ) {
                fclose(fp);
                return -1 ;
        }
	printf("IS PNG.\n");
	fclose(fp);
	return 0;


}
int main() {
	char path[50];
	printf("Digite un path:\n");
	scanf("%s" , path);
	int x = Not_PNG( path );

	printf("%d\n",x);

	return 0;
}
