#include <stdio.h>

int main(void) {
    // create an integer number and store a value in it
    int num;
    num = 3;
    // print num value
    printf("num has a value of %d\n", num);

    // print num address - this should change between runs because C is choosing
    // a different memory address each time
    printf("num has an address of  %p\n", &num);

    // declare an int pointer, remember that a pointer is just a variable that stores
    // the memory address of another variable (indicated by the * in the type)
    int *num_ptr;
    // make num_ptr "point" to num by storing num's address in num_ptr
    num_ptr = &num;

    // print the value stored in num_ptr (this is the address of num remember)
    printf("num_ptr has a value of %p, this should match the value on the line above exactly\n", num_ptr);

    // print the value of num using only num_ptr
    printf("we can print the value of num (%d), by dereferencing num_ptr \
using a * symbol (%d), these values should be the same\n", num, *num_ptr);

    // if we change num, the dereference of num_ptr will also change, because it
    // is "fetching" the value of num every time
    num = 7;
    printf("after changing num, num is %d, *num_ptr is %d\n", num, *num_ptr);

    return 0;
}