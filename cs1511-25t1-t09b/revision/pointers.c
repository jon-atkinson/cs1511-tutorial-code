#include <stdio.h>

int main(void) {
  int *val_ptr;
  *val_ptr = 5;

  (*val_ptr) *= 5;
  printf("value of val_ptr is: %d\n", *val_ptr);

  return 0;
}
