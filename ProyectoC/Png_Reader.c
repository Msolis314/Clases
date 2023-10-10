#include <png.h> 
#include <stdlib.h>
#include <stdio.h>
int width, height;
png_infop info_ptr;
png_byte color_type;

png_byte bits_d;


png_bytep *row_pointers= NULL;

void read_png(char *path) {
	//Primero la libreria debe abrir el archivo, ya se comprobo que exista
	FILE *fp = fopen( path , "rb");
	// Luego se crea el structp, si por alguna razon falla retorna NULL
	png_structp png_ptr = png_create_read_struct(PNG_LIBPNG_VER_STRING , NULL , NULL , NULL);
	if (!png_ptr) {
		fclose(fp);
		fprintf(stderr , "Error al procesar el PNG\n");
		return;
	}

	// Luego se crea la estructura info_ptr

	info_ptr = png_create_info_struct(png_ptr);
	if(!info_ptr) abort();

	/*Si detecta un error la funcion png_jmbuf(png_ptr) salta al setjmp y para liberar cualquier memoria destruye
	 *los structs. Es el mecanismo contra errores de la biblioteca
	 *
	 * */

	if ( setjmp(png_jmpbuf(png_ptr))) {
		png_destroy_read_struct(&png_ptr, &info_ptr,NULL);
		fclose(fp);
		fprintf(stderr, "Error al procesar el PNG\n");
		return;
	}
	// La libreria necesita codigo de entrada, por default usa fread() para leer
	png_init_io( png_ptr, fp);

	png_read_info(png_ptr, info_ptr);

	// ancho de la imagen en pixels
	width = png_get_image_width(png_ptr, info_ptr);
	printf("%d\n",width);

	//Altura de la imagen en pixels
	height = png_get_image_height(png_ptr ,info_ptr);

	// Describe que canales y color y canal alpha hay presentes
	/*TYPE_GRAY
	 *TYPE_GRAY_ALPHA
	 *TYPE_PALETTE
	 *TYPE_RGB
	 *TYPE_RGB_ALPHA
	 * */
	color_type = png_get_color_type(png_ptr , info_ptr);
	bits_d  = png_get_bit_depth(png_ptr , info_ptr);
	/*Necesitamos para el procesamiento siguiente que la imagen este en formato RGBA
	 *4 canales, 3 de color y un alpha
	 *Por eso se utilizan las funciones png_set_packing y png_get_valid
	 *
	 * */
	if ( bits_d < 8) {
		png_set_packing(png_ptr);
	}

	if ( png_get_valid(png_ptr, info_ptr, PNG_INFO_tRNS)) {
		png_set_tRNS_to_alpha(png_ptr);
	}

	png_read_update_info(png_ptr,info_ptr);
	row_pointers = (png_bytep*)malloc(sizeof(png_bytep) * height);
  	for(int y = 0; y < height; y++) {
   		 row_pointers[y] = (png_byte*)malloc(png_get_rowbytes(png_ptr,info_ptr));
 	 }

  	png_read_image(png_ptr, row_pointers);
	//png_read_png( png_ptr , info_ptr , PNG_TRANSFORM_IDENTITY , NULL);
	//row_pointers = png_get_rows(png_ptr, info_ptr);
	//
	png_read_end(png_ptr, NULL);
	png_destroy_read_struct(&png_ptr, &info_ptr,NULL);
	fclose(fp);
	printf("READ\n");
}

int main(){ 
	read_png("dog.png");
	return 0;
}
