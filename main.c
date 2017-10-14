#include <stdio.h>
#include <stdlib.h>
#include "headers.h"
int main(){

  struct node * tester;

  printf("\n\n\n=====TESTING INSERT_FRONT======\n\n\n");
  int x=1;
  while(x<=10){
    tester= insert_front(tester,x);
    x++;
  }
  printf("\n\n\n=====TESTING PRINT_LIST======\n\n\n");
  print_list(tester);
  printf("\n\n\n=====TESTING FREE_LIST======\n\n\n");
  
  
  print_list(free_list(tester));

  
  return x;
  
  
}
