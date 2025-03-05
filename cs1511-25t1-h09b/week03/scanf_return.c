#include <stdio.h>

int main(void) {
  int my_num;
  double my_double;
  int scanf_return = scanf("%d %lf", &my_num, &my_double);

  printf("my_num is %d, my_double is %lf, scanf_return is %d", my_num,
         my_double, scanf_return);
  return 0;
}
