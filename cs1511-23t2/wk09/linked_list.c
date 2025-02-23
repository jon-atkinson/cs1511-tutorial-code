// Emily Chen & Tom Kunc
// Program to do various linked list exercises
// Written by <your-name> (zID) on <date>

#include <stdio.h>
#include <stdlib.h>


#define TRUE 1
#define FALSE 0

struct node {
	int data;		// data item at this node
	struct node *next;		// pointer to the next node
};

/** PRESCRIBED FUNCTIONS **/

// Append to a linked list
struct node *add_last(struct node *head, int data);

// Prints the data of a linked list
void print_list(struct node *head);

// Returns a copy of the linked list and frees the original list.
struct node *copy(struct node *head);

// Returns a new linked list where it is the second appended to the first
struct node *list_append(struct node *first_list, struct node *second_list);

// Returns 1 if the two lists are identical, otherwise returns 0
int identical(struct node *first_list, struct node *second_list);

// Given two lists in strictly increasing order, perform the set operation: intersection.
// Return a new linked list (in strictly increasing order) of the elements in both set1 and set2
struct node *set_intersection(struct node *first_list, struct node *second_list);

/** REVISION FUNCTIONS **/

// Deletes the last node of the given linked list and returns the head of
// the linked list
struct node *delete_last(struct node *head);

// Returns 1 if list is in strictly increasing order, otherwise returns 0
int ordered(struct node *head);

// Given two linked lists in strictly increasing order, perform the set operation: union.
// Return a new linked list (in strictly increasing order) of the elements in either set1 or set2
// which has no duplicates (only include them once)
struct node *set_union(struct node *first_list, struct node *second_list);

// Frees all the elements in a linked list
void free_list(struct node *head);

// Return the number of items in the linked list
int num_items(struct node *head);

int main(void) {

    // TODO: Test the functions
    
    return 0;
}

/** PRESCRIBED FUNCTIONS **/

struct node *add_last(struct node *head, int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    // Return new if linked list is initially empty
    if (head == NULL) {
        return new;
    }

    // Otherwise, loop to end of list and add node.
    struct node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = new;

    // We are inserting at the end --> head will not change
    return head;
}

void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X\n");
}

struct node *copy(struct node *list) {
    return NULL;
}

struct node *list_append(struct node *first_list, struct node *second_list) {
    struct node *curr = first_list;
    if (curr == NULL) {
        return second_list;
    }
    while(curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = second_list;
    return first;
}

// returns TRUE if lists identical, FALSE otherwise
int identical(struct node *first_list, struct node *second_list) {
    if (first_list == NULL && second_list == NULL) {
        return TRUE;
    }

    if (first_list == NULL || second_list == NULL) {
        return FALSE;
    }

    while (first_list != NULL && second_list != NULL) {
        if (first_list->data != second_list->data) {
            return FALSE;
        }
    }

    if (first_list != NULL || second_list != NULL) {
        return FALSE;
    }

    return TRUE;
}

// takes two linked lists, assumes they are sorted
// returns the sorted set intersection of the two lists
// INCOMPLETE - ASK IN LAB IF HAVE QUESTIONS
struct node *set_intersection_naive(
    struct node *first_list,
    struct node *second_list
) {
    if (first_list == NULL) {
        return second_list;
    }
    if (second_list == NULL) {
        return first_list;
    }

    struct node *curr = first_list;
    struct node *curr2 = second_list;
    struct node *returning = curr->data < curr2->data ? curr : curr2;
    struct node *returning_head = returning;
    returning = returning->next;
    while (curr != NULL || curr2 != NULL) {
        if (curr == NULL) {
            returning->next = curr2;
        }
        returning = returning->next;
    }
    
    return NULL;
}  

// takes two linked lists, does not assume they are sorted
// returns the sorted set intersection of the two lists
struct node *set_intersection_smart(
    struct node *first_list,
    struct node *second_list
) {

    return NULL;
}  

// 
struct node *sorte_list() {

}