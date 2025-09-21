#include <stdio.h>

struct node {
  int data;
  struct node *next;
};

int main(void) {
  struct node node1;
  node1.data = 1;
  node1.next = NULL;

  struct node node2;
  node2.data = 2;
  node2.next = NULL;

  struct node node3;
  node3.data = 3;
  node3.next = NULL;

  // linking nodes
  node1.next = &node2;
  node2.next = &node3;

  struct node *head = &node1;

  return 0;
}
