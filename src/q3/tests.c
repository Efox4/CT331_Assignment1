#include <stdio.h>
#include "tests.h"
#include "genericLinkedList.h"


void printChar(void* data) {
	printf("Character: %c\n", *(char*)data);
}

void printInt(void* data) {
	printf("Integer: %d\n", *(int*)data);
}

void printStr(void* data) {
	printf("String: %s\n", data);
}

void printLong(void* data) {
	printf("Long: %ld\n", *(long*)data);
}
void printDouble(void* data) {
	printf("Double: %f\n", *(double*)data);
}
void printFloat(void* data) {
	printf("Float: %f\n", *(float*)data);
}

void runTests(){
  printf("Tests running...\n");

  
  //test createEl function with printChar function
  listElement* l = createEl("1", 30, &printChar);
  
  //Test traverse
  traverse(l);
  printf("\n");

  //Test insert after with printStr
  listElement* l2 = insertAfter(l, "a string(2)", 30, &printStr);
  insertAfter(l2, "a final string (3)", 30,&printStr);
  traverse(l);
  printf("\n");

  //Test deleteAfter
  deleteAfter(l2);
  traverse(l);
  printf("\n");

  //Test length
  printf("Length: %d\n", length(l));

  //Test push with float
  float f = 23.3;
  float *fptr = &f;
  push(&l, fptr, 30, printFloat);
  traverse(l);
  printf("\n");

  //Test pop
  printf("Testing pop\n");
  listElement* popped = pop(&l);
  traverse(l);
  printf("\n");

  //Test enqueue with printInt
  printf("Testing enqueue\n");
  int i = 56;
  int *iptr = &i;
  enqueue(&l, iptr, 30, printInt);
  traverse(l);
  printf("\n");

  //Test dequeue
  listElement* dequeued = dequeue(l);
  printf("Dequeuing: %s\n\n", dequeued->data);

  //Test double and long 
  double dub = 445.44;
  long lo = 56786789;
  double *dubptr = &dub;
  long * loptr = &lo;
  push(&l, dubptr, 30, printDouble);
  push(&l, loptr, 30, printLong);
  traverse(l);
     //...

  printf("\nTests complete.\n");
}
