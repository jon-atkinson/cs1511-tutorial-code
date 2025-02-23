// Jon Atkinson and COMP1511 M18A 23T3
// Small program to demonstrate the use of pointers when working with structs
// and functions, especially to see the -> syntax at work
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book {
    char title[100];
    char author[100];
    int year;
};

void modify_book(struct book *book);

int main() {
    struct book book;

    strcpy(book.title, "To Kill a Mockingbird");
    strcpy(book.author, "Harper Lee");
    book.year = 1960;

    printf("Before modification:\n");
    printf("Title: %s, Author: %s, Year: %d\n", book.title, book.author, book.year);

    modify_book(&book);

    printf("After modification:\n");
    printf("Title: %s, Author: %s, Year: %d\n", book.title, book.author, book.year);

    return 0;
}
// Alternative implementation of a function using the "worse" syntax
// This should work but is much harder to read and easier to get wrong when writing
// void modify_book(struct book *book) {
//     (*book).year = 1925;
//     strcpy((*book).title, "The Great Gatsby");
//     strcpy((*book).author, "F. Scott Fitzgerald");
// }

void modify_book(struct book *book) {
    book->year = 1925;
    strcpy(book->title, "The Great Gatsby");
    strcpy(book->author, "F. Scott Fitzgerald");
}