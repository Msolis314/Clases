
echo "Hola"

echo "Nombre del script: $0"

echo "$1"

#function display_help {
#	echo "Help"
#	exit 0
#}
#display_help

#if [ "$1"=="-h" ]; then 
#	echo "Help"
#fi

read -p  "Ingrese un numero" num 

if [ $((num%2)) -eq 0 ]; then 
	echo "Positivo"
else
	echo "No divisible entre 2"
fi

touch archivo_ejem

if [ -e "archivo_ejem" ]; then 
	echo "Archivo existe"
fi

for number in {2..10..2}
do 
	echo $number
done
