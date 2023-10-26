En el presente laboratorio se busco implementar operaciones en lista enlazadas. 
Primero, para crear una lista se debe crear un  tipo de dato struct para los nodos que contenga: 
1. El dato almacenado en el nodo
2. Un puntero al siguiente elemento
Lo cuál se hace con el siguiente código: 
```C
struct Node {
	int data;
	struct Node* next;
};
```
En este caso el tipo de dato es `int` y resaltar que puntero es del tipo `Node*` haciendo referencia que apunta a otro nodo. 
## Agregar un nodo al inicio
Para agregar un nodo al inicio de la lista se debe primero reservar el espacio en memoria para el nuevo nodo. 
```C
struct Node* nuevo = (struct Node*)malloc(sizeof( struct Node));
```
Luego asignar el dato al nuevo nodo y hacer que su next apunte al puntero de la antigua cabeza. 
```C
nuevo->data = data;
// el next del nuevo nodo es la antigua cabeza
nuevo->next = (*head);
// el puntero cabeza ahora apunta a nuevo
```
Ahora, es importante destacar que en este caso se necesita pasar un  doble pointer a la función ya que hay que modificar el puntero de la cabeza al nuevo nodo. 
```C
void insert(int data ,struct  Node **head)
```
## Agregar un nodo al final 
Para agregar un nodo se debe nuevamente reservar su espacio en el *heap*  , pero ahora se apunta su cabeza a `NULL`. 
```C
nuevo ->data = data;
nuevo -> next = NULL;
```

Seguidamente, utilizando los punteros temporales de `current` y `last` se itera en la lista actual hasta llegar al final esto para almacenar en `last` el puntero al ultimo elemento actual. El next de este elemento ahora debe apuntar al nuevo nodo. 
```C
while ( current != NULL) {
		last = current;
		current = current ->next;
	}
	last -> next = nuevo;
```
## Agregar un nodo en un índice cualquiera
Para agregar un nodo en cualquier posición, se sigue una lógica similar a la anterior para los casos extremos de que se trate del índice 0  que seria igual a agregarlo al inicio o un índice mayor que seria como agregarlo al final. Para el caso intermedio se debe iterar en la lista hasta encontrar el índice o llegar a NULL. Si sucede lo ultimo significa que no existe el índice y se agregar al final el nodo, sino se almacena en un nodo temporal `prev` el nodo anterior al del índice `current` este ahora debe apuntar a nuevo y el next de nuevo debe apuntar a `current`.
```C
prev -> next = nuevo;
nuevo -> next = current;
```