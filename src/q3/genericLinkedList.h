

#ifndef CT331_ASSIGNMENT_GENERIC_LINKED_LIST
#define CT331_ASSIGNMENT_GENERIC_LINKED_LIST



typedef void(*myFuncDef) (void *data);

typedef struct genListElementStruct {
	void* data;
	size_t size;
	myFuncDef print;
	struct genListElementStruct* next;
}listElement;


//Creates a new linked list element with given content of size
//Returns a pointer to the element
listElement* createEl(void* data, size_t size,myFuncDef);

//Prints out each element in the list
void traverse(listElement* start);

//Inserts a new element after the given el
//Returns the pointer to the new element
listElement* insertAfter(listElement* after, void* data, size_t size, myFuncDef);

//Delete the element after the given el
void deleteAfter(listElement* after);

int length(listElement* list);

void push(listElement** list, void* data, size_t size, myFuncDef );

listElement* pop(listElement** list);

void enqueue(listElement** list, void* data, size_t size, myFuncDef );

listElement* dequeue(listElement* list);


#endif