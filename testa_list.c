#include "list.h"

int main(void) {
	List* l = list_create();

	l = list_insert(l, 4);
	l = list_insert(l, 5);
	l = list_insert(l, 6);
	l = list_insert(l, 4);
	l = list_insert(l, 7);
	l = list_insert(l, 2);

	list_print(l);

	list_destroy(l);

	l = list_create();

	l = list_append(l, 4);
	l = list_append(l, 5);
	l = list_append(l, 6);
	l = list_append(l, 4);
	l = list_append(l, 7);
	l = list_append(l, 2);

	list_print(l);

	list_destroy(l);

	return 0;
}	

