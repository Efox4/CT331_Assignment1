#include <stdio.h>

int i;
int* p;
long l;
double* dp;
char** cpp;

int main(int arg, char* argc[]){
  printf("int: %d bytes\n", sizeof(i));
  printf("int pointer: %d bytes\n", sizeof(p));
  printf("long: %d bytes\n", sizeof(l));
  printf("double pointer: %d bytes\n", sizeof(dp));
  printf("chara pointer pointer: %d bytes\n", sizeof(cpp));
  return 0;
}
