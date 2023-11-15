
def division_error(a,b):
    try:
        return a/b
    except ZeroDivisionError:
        print("No se puede dividir por cero")
    except ValueError:
        print("Valores no validos")
    except TypeError:
        print("No del tipo correcto")

print(division_error(2,0))

def convertir_a_entero(cadena):
    try:
        num = int(cadena)
        return num
    except ValueError:
        print("No se logro convertir a entero")

convertir_a_entero("r7u89")

dict1= {"key1":1, "key2":2}

def buscar_clave( dictio, key):
    try:
        print(f" La clave {key} es {dictio[key]}")
    except KeyError:
        print("Clave no encontrada")

buscar_clave(dict1, "h")
buscar_clave(dict1,"key1")