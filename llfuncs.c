#include "llh.h"

struct node * createLL(){
  struct node *p = malloc(sizeof(struct node));
  p -> i = 0;
  p -> next = NULL;
  return p;
}

void print_list(struct node * l){
  if (!l){
    printf("[ ]");
    return;
  }
  struct node *p = l -> next;
  printf("[");
  if (!p) printf(" ");
  else{
    printf("%d", l -> i);
    while (p -> next){
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

struct node * removeN(struct node *l, int n){
  struct node *p = l -> next;
  if (l -> i == n){
    free(l);
    l = NULL;
    return p;
  }
  struct node *pp = l;
  while (p -> next){
    if (p -> i == n){
      pp -> next = p -> next;
      free(p);
      p = NULL;
      return l;
    }
    pp = p;
    p = p -> next;
  }
  return l;
}

struct node * free_list(struct node * l){
  struct node *p = l -> next;
  if (p) printf("freeing node: %d\n", l -> i);
  else printf("List freed.\n");
  free(l);
  l = NULL;
  if (p) free_list(p);
  return l;
}
