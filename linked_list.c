#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

void print_list(struct node * ptr){
  while (ptr){//null= false
    printf("%d-->", ptr->i);
    ptr=ptr->next;
  }
  printf("null\n");
}

struct node * insert_front(struct node * n, int num){
  struct node * head = malloc(sizeof(struct node));
  head->i= num;
  head->next= n;
  return head;
}

struct node * free_list(struct node * lp){
  struct node * n=lp;
  while(lp){
    struct node * next = lp-> next;
    free(lp);
    lp = next;
  }
  return n;
}

