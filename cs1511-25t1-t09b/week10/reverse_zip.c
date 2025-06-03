#include <stdio.h>
#include <stdlib.h>

struct node *reverse_zip(struct node *first, struct node *second);

struct node {
  int data;
  struct node *next;
};

struct node *insert_value(struct node *head, int value);
void print_list(struct node *head);
struct node *reverse_zip(struct node *first, struct node *second);

int main(void) {
  struct node *first = NULL;
  first = insert_value(first, 1);
  first = insert_value(first, 2);
  first = insert_value(first, 3);
  printf("first starts as: ");
  print_list(first);

  struct node *second = NULL;
  second = insert_value(second, 4);
  second = insert_value(second, 5);
  second = insert_value(second, 6);
  printf("second starts as: ");
  print_list(second);

  struct node *final = reverse_zip(first, second);

  printf("final ends as: ");
  print_list(final);

  return 0;
}

struct node *create_node(int value) {
  struct node *new_node = malloc(sizeof(struct node));
  if (new_node == NULL)
    exit(1);

  new_node->data = value;
  new_node->next = NULL;

  return new_node;
}

void print_list(struct node *head) {
  while (head != NULL) {
    printf("%d ", head->data);
    head = head->next;
  }
  printf("\n");
}

struct node *insert_value(struct node *head, int value) {
  struct node *new_node = create_node(value);
  if (head == NULL) {
    return new_node;
  }

  struct node *curr = head;
  while (curr->next != NULL) {
    curr = curr->next;
  }
  curr->next = new_node;

  return head;
}

// assumes lists are the same length
struct node *reverse_zip(struct node *first, struct node *second) {
  struct node *curr = first;

  while (curr->next != NULL) {
    struct node *inner_prev = NULL;
    struct node *inner_curr = second;

    while (inner_curr->next != NULL) {
      inner_prev = inner_curr;
      inner_curr = inner_curr->next;
    }

    inner_curr->next = curr->next;
    curr->next = inner_curr;
    inner_prev->next = NULL;

    curr = inner_curr->next;
  }

  curr->next = second;
  return first;
}
