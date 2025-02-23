// Jonathan Atkinson & COMP1511 H09C 23T3

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int zID;
    int mark;
    char name[100];
    struct student *next;
};

struct student *create_student(int zID, double mark, char *name);

int main(void) {
    // int number;
    int *number = malloc(sizeof(int));
    // number = 3;
    *number = 3;

    // obviously this is an inefficient solution, you might like to think about
    // how we could use loops to make it more flexible and readable
    struct student *head = create_student(235674, 34, "Jon");
    struct student *freddy = create_student(235674, 34, "Freddy");
    head->next = freddy;
    struct student *sam = create_student(235674, 34, "Samantha");
    head->next->next = sam;
    struct student *bob = create_student(235674, 34, "Bob");
    sam->next = bob;

    if (head == NULL) {
        return 1;
    }

    int n;
    printf("Enter n (for printing nth node in list): ");
    scanf("%d", &n);

    struct student *curr = head;
    int i = 0;
    while (curr->next != NULL && i < n) {
        curr = curr->next;
        i++;
    }

    // notice that using this method means that curr == last node even if n > number of nodes
    // in the list, this may or may not be a good solution depending on your requirements
    printf("nth student, mark: %d, name: %s\n", curr->mark, curr->name);

    free(number);
    // freeing all nodes in the list, we can use head because we don't need access
    // to the nodes if we're deleting them, think about how to put this into a function
    curr = head;
    while (curr != NULL) {
        struct student *deleteMe = curr;
        curr = curr->next;
        free(deleteMe);
    }

    return 0;
}

struct student *create_student(int zID, double mark, char *name) {
    struct student *new_student = malloc(sizeof(struct student));
    new_student->zID = zID;
    new_student->mark = mark;
    strcpy(new_student->name, name);
    new_student->next = NULL;
    return new_student;
}
