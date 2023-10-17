#include <stdio.h> 
#include<stdlib.h>
struct Node {
	int data;
	struct Node* next;
};
/* Liberar memoria */

void freeList(struct Node* head) {
	struct Node* current = head;
	struct Node* next;

	while (current != NULL ) {
		next = current -> next;
		free(current);
		current = next;
	}
}

/* Imprimir Lista */

void printList( struct Node* node) {

	while (node != NULL ) {
		printf("%d ->", node -> data);
		node = node -> next;

	}
	printf("\n");
}
/*
 *Insertar nodo al principio de la lista
 *
 * */

/* Eliminar un elemento por valor */

void deleteNode(int valor,  struct Node **node ) {
	struct Node* current = *node;
	struct Node* prev = NULL;

	//Caso esquina eliminar primer elemento 
	if (current != NULL && current -> data == valor ) {
		*node = current -> next;
		free(current);
		return;
	}

	//Buscar el nodo
	while ( current != NULL && current -> data != valor ) {	
		prev = current;
		current = current -> next;
	}

	// Nodo encontrado o final de la lista
	if (current == NULL ) {
		printf("Nodo no encontrado\n");
	}

	//Encontramos el nodo, toca eliminarlo
	prev -> next = current -> next;
	free(current);
}
void insert(int data,struct Node** head ) {
	struct Node* nuevo = (struct Node*)malloc(sizeof(struct Node));
	nuevo -> data = data;
	nuevo -> next = (*head);
	(*head) = nuevo;

}

int main() {
	struct Node* head = NULL;
	insert(10, &head);
	printList(head);
	deleteNode(10, &head);
	printList(head);
	freelist(head);
}
