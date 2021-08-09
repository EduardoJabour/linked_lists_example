#include <stdio.h>
#include <stdlib.h>

#include "list.h"


struct list{ //Elementos da lista
	int info;
	struct list* next;
};

List* list_create(){ //Zerar o ponteiro inicial da lista
	return NULL;
}

int list_empty(List* lst){ //Esvaziar lista
	return lst == NULL;
}

List* list_insert(List* lst, int val){ // Insere um novo elemento no início da lista (pilha) LIFO
	List* ant = (List*)malloc(sizeof(List));

	ant->next = lst;
	ant->info = val;

	return ant;
}

List* list_append(List* lst, int val){ // Insere um novo elementos ao final da lista (fila) FIFO
	if(list_empty(lst))
		return list_insert(lst, val);
	else {
		List* p = lst;

		while(p->next != NULL) 
			p = p->next;
    
		p->next = list_insert(p->next, val); 

		return lst;
	}
}

void list_print(List* lst){ // Imprime lista
	List* p = lst;

	while(p != NULL) {
		printf("%d ", p->info);
		p = p->next;
	}
	printf("\n");
}

void list_destroy(List* lst){ // Destruir lista
	List* p = lst;
	List* prox = NULL;

	while(p != NULL) {
		prox = p->next;
		free(p);
		p = prox;
	}
}

