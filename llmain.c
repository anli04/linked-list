#include "llh.h"

int main(){
  struct node *l = createLL();
  printf("Empty List:\n");
  print_list(l);
  printf("Adding #s 0-9 to list.\nPrinting list.\n");
  int x = 0;
  for (; x < 10; x++) l = insert_front(l, x);
  print_list(l);
  printf("Freeing list.\n");
  l = free_list(l);
  printf("Printing list.\n");
  print_list(l);
  return 0;
}
