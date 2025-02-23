#include <stdio.h>

void print_array(int *array);
void print_array2(double *array);

int main(void) {
    int zeroes1[10] = {};

    double zeroes2[10] = {};

    // double zeroes[10] = {};

    print_array(zeroes1);
    print_array2(zeroes2);
}

void print_array(int *array) {
    int i = 0;
    while (i < 10) {
        printf("%d ", array[i]);
        i++;
    }
    printf("\n");
}

void print_array2(double *array) {
    int i = 0;
    while (i < 10) {
        printf("%.1lf ", array[i]);
        i++;
    }
    printf("\n");
}