/**
 * Insira seu código para solucionar o trabalho neste arquivo.
 */

#include "lista.h"
#include "stdio.h"
#include "string.h"


typedef struct node {
	void* data;

	struct node* next;
}
typedef struct Lista {
	int data_size;
	node* head;
	void (*free_data)(void*)
}

void Lista_new(Lista* lista, int data_size, void (*free_data) (void*)){
	lista->data_size = data_size;
	lista->head = NULL;
	lista->free_data = free_data;
	
}

void  Lista_delete(Lista* lista){
	Node* current = lista->head;
	while (current != NULL){ 
	Node* next = current->next;
	lista->free_data(current->data);
	free(current);

	
}
