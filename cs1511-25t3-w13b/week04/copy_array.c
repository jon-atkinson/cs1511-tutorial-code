#include <stdio.h>

int main(void) {
  double arr[3] = {1.1, 2.2, 3.3};

  double copy[10] = {0.0};

  int i = 0;
  while (i < 3) {
    printf("%lf ", arr[i]);
    i++;
  }
  printf("\n");

  i = 0;
  while (i < 3) {
    copy[i] = arr[i];
    i++;
  }

  i = 0;
  while (i < 10) {
    printf("%lf ", copy[i]);
    i++;
  }
  printf("\n");
}
