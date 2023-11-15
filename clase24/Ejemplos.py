def funcion_que_puede_generar_una_excep(valor):
    if valor < 0:
        raise Exception("El valor no puede ser negativo")

#Ejemplo uso

try: 
    valor_ingresado= int(input("Ingrese un numero positivo"))
    funcion_que_puede_generar_una_excep(valor_ingresado)
except Exception as e:
    print(f'Error: {e}')

else:
    print("No se genero ninguna excepcion")


class MiExcepcionPersonalizada(Exception):
    def __init__(self, mensaje= "Per excep"):
        self.mensaje= mensaje
        super().__init__(self.mensaje)

def funcion_que_puede_generar_una_excep2(valor):
    if valor < 0:
        raise MiExcepcionPersonalizada("El valor no puede ser negativo")

try: 
    valor_ingresado= int(input("Ingrese un numero positivo"))
    funcion_que_puede_generar_una_excep(valor_ingresado)
except MiExcepcionPersonalizada as e:
    print(f'Error: {e}')

else:
    print("No se genero ninguna excepcion")  
