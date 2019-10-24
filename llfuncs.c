#include "llh.h"

struct node * createLL(){
  struct node *p = malloc(sizeof(struct node));
  p -> i = 0;
  p -> next = NULL;
  return p;
}

void print_list(struct node * l){
  if (l == NULL) printf("[ ]");
  struct node *p = l -> next;
  printf("[");
  if (p == NULL) printf(" ");
  else{
    printf("%d", l -> i);
    while (p -> next != NULL){
      printf(", %d", p -> i);
      p = p -> next;
    }
  }
  printf("]\n");
}

struct node * insert_front(struct node * l, int n){
  struct node *p = malloc(sizeof(struct node));
  p -> i = n;
  p -> next = l;
  return p;
}

struct node * free_list(struct node * l){
  struct node *p = l -> next;
  printf("freeing node: %d\n", l -> i);
  free(l);
  l = NULL;
  if (p != NULL) free_list(p);
  return l;
}
