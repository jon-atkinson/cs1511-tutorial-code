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
  struct student students[MAX];

  int i = 0;
  while (i < MAX) {
    students[i].wam = 100.0 / i;
    students[i].initial = 'a' + i % 26;
    students[i].age = i;
    students[i].year = FIFTH;

    i++;
  }

  i = 0;
  while (i < MAX) {
    print_student(students[i]);
    i++;
  }

  return 0;
}

void print_student(struct student student) {
  printf("student has wam %lf, initial '%c', age %d and is in ", student.wam,
         student.initial, student.age);

  if (student.year == FIRST) {
    printf("first ");
  } else if (student.year == SECOND) {
    printf("second ");
  } else if (student.year == THIRD) {
    printf("third ");
  } else if (student.year == FOURTH) {
    printf("fourth ");
  } else {
    printf("fifth ");
  }

  printf("year!\n");

  return;
}
