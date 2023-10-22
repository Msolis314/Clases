## Introducción 


## Marco Teórico 


## Implementación

## Resultados

Como se denota a continuación pasando la siguiente imagen en png: 
![alt image](https://github.com/crn15/ProyectoC/blob/main/bin/dog.png)
Se obtiene el siguiente resultado al realizar la transformación: 
![alt image](https://github.com/crn15/ProyectoC/blob/main/bin/pruebafinal.png)
Por igual, al pasar la siguiente imagen en formato jpeg:
![alt image](https://github.com/crn15/ProyectoC/blob/main/bin/pruebajpeg.jpeg)
Se obtiene:
![alt image](https://github.com/crn15/ProyectoC/blob/main/bin/pruebafinal.jpeg)
Mostrando que se cumplió con el objetivo del proyecto.
Además, para monitorear el consumo de  %memoria y %cpu del programa se utilizó el siguiente script en bash. 
```bash 
#!/bin/bash
n = 0 
echo " #%CPU #MEM #Time" > log.txt
while ( $n -lt 50 );
do 
	id=$1
	var1=$( ps -p $id -o %cpu= )
	var2=$( ps -p $id -o %mem= )
	time=$( date "+ %s" )
	echo "$var1 $var2 $time" >> log.txt
	n=$(( n+1))
done
```
Utilizando la función `sleep()` contenida en la biblioteca estándar `<unistd.h>` se prolongo la duración del programa para lograr obtener su id usando el comando `pidof ` y luego pasarlo al script. Los resultados se escribieron en un archivo de log como se denota a continuación: 
![alt image](https://github.com/Msolis314/Clases/blob/main/%25CPUC.png)
El porcentaje de consumo de CPU promedia en 0.2 y de memoria en 0. Luego para obtener el tiempo de duración se utilizo la biblioteca `<time.h>` iniciando el relog al comienzo de la función main con `clock_t begin = clock()` y finalizando la toma de tiempo al cerrarse la ejecución con `clock_t end = clock()`. Para calcular el tiempo se utilizo:
```C
double time = (double)(end - begin)/ CLOCKS_PER_SEC;
```
Finalmente, al imprimir la variable time se obtiene: 
![alt image](https://github.com/Msolis314/Clases/blob/main/WhatsApp%20Image%202023-10-22%20at%2013.15.10.jpeg)
El cual sería el tiempo de ejecución del programa.
## Conclusión