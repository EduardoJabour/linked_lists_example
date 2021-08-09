typedef struct list List;

List* list_create();
List* list_insert(List* lst, int val);
List* list_append(List* lst, int val);
void  list_print(List* lst);
int   list_empty(List* lst);
void  list_destroy(List* lst);

