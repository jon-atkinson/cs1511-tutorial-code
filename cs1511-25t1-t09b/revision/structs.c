#include <stdio.h>

#define MAX 100

enum university_year { FIRST, SECOND, THIRD, FOURTH, FIFTH };

struct student {
  double wam;
  char initial;
  int age;
  enum university_year year;
};

void print_student(struct student student);

int main(void) {
  // struct student students[MAX];

  // int i = 0;
  // while (i < MAX) {
  //   students[i].wam = 3.7;
  //   students[i].initial = 'j';
  //   students[i].age = 23;
  //   students[i].year = FIFTH;
  //   i++;
  // }

  //

  // print_student(students[0]);
  int i = 0;
  while (i < MAX) {
    char character = 'a' + i % 26;
    printf("char is %c\n", character);
    i++;
  }

  return 0;
}

void print_student(struct student student) {
  printf("this is a string printf");
}
