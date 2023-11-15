#Este es un comentario de una linea 

'''
Este es un comentario de varias lineas 
Puede abarcar varias lineas de codigo 
'''

"""
Este es otro comentario de varias lineas
"""

def promedio( listanum):
    suma = 0 
    for i in listanum:
        suma+=i
    promedio = suma/len(listanum)

def mauor( a , b ,c ):
    if a > b and a > c:
        return a
    elif b > a and b >c:
        return b
    else:
        return c
def area_triangulo(base , altura):
    area = base*altura/2
    return area

def suma_elementos( lista , valor_inicial = 0):
    suma = 0
    for i in range ( valor_inicial , len(lista) ):
        suma += lista[i]
    return suma

listita=[1,4,5,6,8,9]

print(suma_elementos( listita , 3))
        
