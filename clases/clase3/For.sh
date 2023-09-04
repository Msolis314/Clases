#!/bin/bash

#Array

frutas=("Manzanas" "Banano" "Mango")

for fruit in "${frutas[@]}"
do
	echo " fruta $fruit"
done

for process in $(ps aux | awk '{print $11}')
do 
	echo "Proceso: $process"
done

