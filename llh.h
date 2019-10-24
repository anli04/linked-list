#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct node{
  int i;
  struct node * next;
};

struct node * createLL();
void print_list(struct node * l);
struct node * insert_front(struct node * l, int n);
struct node * free_list(struct node * l);
