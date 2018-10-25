#include <stdio.h>
#include "tests.h"
#include "linkedList.h"



void testCreateEl() {
	printf("\n\nTesting CreateEl and traverse:\n");
	listElement* l = createEl("Test String (1).", 30);	
	 //Test create and traverse	
	traverse(l);//if it prints out the list it has created it and traversed it
	printf("\n");
}


void testInsertAfter() {
	//Test insert after
	printf("Test InsertAfter:\n");
	listElement* l = createEl("Test (1).", 30);
	listElement* l2 = insertAfter(l, "another string (2)", 30);
	insertAfter(l2, "a final string (3)", 30);
	traverse(l);
	printf("\n");
}
void testDeleteAfter(){
	// Test delete after
	printf("\nTest DeleteAfter:\n");
	listElement* l = createEl("Test (1).", 30);
	listElement* l2 = insertAfter(l, "another string (2)", 30);
	deleteAfter(l);
	traverse(l);
	printf("\n");
}
void testLength() {
	//Test length
	printf("\nTest Length:\n");
	listElement* l = createEl("Test (1).", 30);
	listElement* l2 = insertAfter(l, "another string (2)", 30);
	insertAfter(l2, "a final string (3)", 30);
	printf("length of l = %d\n", length(l));

}
void testPush() {
	//test push
	printf("\nTest Push:\n");
	listElement* l = createEl("Test (1).", 30);
	listElement* l2 = insertAfter(l, "another string (2)", 30);
	insertAfter(l2, "a final string (3)", 30);
	push(&l, "element (0)", 30);

	traverse(l);
}
void testPop() {
	//test pop
	printf("\nTest Pop:\n");
	listElement* l = createEl("Test String(1).", 30);
	listElement* l2 = insertAfter(l, "another string (2)", 30);
	insertAfter(l2, "a final string (3)", 30);
	listElement* popped = pop(&l);//should be "Test String(1)."
	printf("Popped element:%s\n", (popped)->data);
	listElement* popped1 = pop(&l);
	printf("Popped element:%s\n", popped1->data);//should be "another string (2)"

	traverse(l);
}
void testEnqueue() {
	//test enqueue
	printf("\nTest Enqueue:\n");
	listElement* l = createEl("Test String (1).", 30);
	enqueue(&l, "another String (2)", 30);
	enqueue(&l, "final String (3)", 30);
	traverse(l);
}
void testDequeue() {
	//test dequeue
	printf("\nTesting Dequeue:\n");
	listElement* l = createEl("Test String (1).", 30);
	listElement* l2 = insertAfter(l, "another string (2)", 30);
	insertAfter(l2, "a final string (3)", 30);
	listElement *dequeued = dequeue(l);
	printf("Dequeued element: %s\n", dequeued->data); //should be "a final string (3)"
	traverse(l);
}

void runTests(){
  

  
  testCreateEl();
  testInsertAfter();
  testDeleteAfter();
  testLength();
  testPush();
  testPop();
  testEnqueue();
  testDequeue();

  printf("\nTests complete.\n");
}
