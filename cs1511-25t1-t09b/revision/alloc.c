#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *num = malloc(sizeof(num));
  free(num);

  return 0;
}
