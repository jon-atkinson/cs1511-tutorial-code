#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

// void sub_two(int *num_ptr) {
//   printf("");
//   *num_ptr = *num_ptr - 2;
// }

int main(void) {
  // int num = 3;
  // int *num_ptr = &num;

  // printf("num is %d before call\n", num);

  // sub_two(num_ptr);

  // printf("num is %d after call\n", num);

  // struct node first;
  // first.data = 3;
  // first.next = NULL;

  // struct node *first_ptr = &first;
  // // first.data = 8;
  // first_ptr->data = 8;

  // printf("data is %d, address is %p\n", first.data, first.next);

  int *heap_integer = malloc(sizeof(int));

  *heap_integer = 2;
  printf("heap_integer stores %d and has address %p\n", *heap_integer,
         heap_integer);

  free(heap_integer);

  return 0;
}
