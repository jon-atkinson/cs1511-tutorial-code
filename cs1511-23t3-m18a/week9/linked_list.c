// Emily Chen & Tom Kunc
// Program to do various linked list exercises
// Written by Jon Atkinson (z5363013) and COMP1511 M18A 23T3 on 09/11/2023

#include <stdio.h>
#include <stdlib.h>

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
    struct node *head = NULL;
    for (int i = 0; i < 8; i++) {
        head = add_last(head, i);
    }

    printf("initial list: ");
    print_list(head);

    struct node *copied = copy(head);
    copied->data = 42;
    printf("deep copy list: ");
    print_list(copied);

    return 0;
}

/** PRESCRIBED FUNCTIONS **/

// adds a node to the end of the list, returns pointer to the list
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

// prints a linked list, null represented by X
void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X\n");
}

// produces a deep copy of a linked list and returns a the head of the new list
// a deep copy has the same values and unique positions in memory (a change in
// one won't be reflected in the other)
struct node *copy(struct node *list) {
    struct node *new_list = NULL;
    struct node *check_list = list;
    if (check_list == NULL) {
        return NULL;
    }
    while (check_list != NULL) {
        new_list = add_last(new_list, check_list->data);
        check_list = check_list->next;
    }
    return new_list;
}

// takes two lists, connects second_list to end of first_list and returns
// a pointer to the connected list
struct node *list_append(struct node *first_list, struct node *second_list) {
    // edge case, empty first list
    if (first_list == NULL) {
        return second_list;
    }

    // finding the end of the first list
    struct node *curr = first_list;
    while (curr->next != NULL) {
        curr = curr->next;
    }

    // connecting the two lists - we haven't explicitly thought about the edge case
    // of empty second list, will this still work? Why? Hand trace this case if you're not sure
    curr->next = second_list;
    return first_list;
}

int identical(struct node *first_list, struct node *second_list) {
    // loop through to the end of the shortest list
    while (first_list != NULL && second_list != NULL) {
        // if one position not match then not identical
        if (first_list->data != second_list->data) {
            return 0;
        }
    }

    // checking that lists aren't different lengths
    if (first_list != NULL || second_list != NULL) {
        return 0;
    }

    // here lists same length and all values matching
    return 1;
}

struct node *set_intersection(
    struct node *first_list,
    struct node *second_list
) {
    // base case, intersection is the empty set
    struct node *intersection = NULL;
    
    // looping over first list
    while (first_list != NULL) {
        // checking the value in first_list we're up to against all second_list
        struct node *curr = second_list;
        while(curr != NULL) {
            if (first_list->data == curr->data) {
                intersection = add_last(intersection, first_list->data);
            }
            curr = curr->next;
        }
    }
    return intersection;
}

struct node *set_union(struct node *first_list, struct node *second_list) {
    // adding all nodes in first_list to the union
    struct node *set_union = copy(first_list);
    int already_added = 0;

    // looping over second_list to check if should add each value
    while (second_list != NULL) {
        // checking one value in second_list against each value added to the union
        first_list = set_union;
        already_added = 0;
        while (first_list != NULL) {
            if (first_list->data == second_list->data) {
                already_added = 1;
            }
            first_list = first_list->next;
        }

        // if node not already in union, add it
        if (already_added == 0) {
            set_union = add_last(set_union, second_list->data);
        }
        second_list = second_list->next;
    }

    return set_union;
}

int ordered(struct node *head) {
    int previous_value = head->data - 1;
    while(head != NULL) {
        if (head->data >= previous_value) {
            return 0;
        }
        previous_value = head->data;
        head = head->next;
    }
    return 1;
}

struct node *delete_last(struct node *head) {
    struct node *curr = head;
    // empty list or single node cases (I think that the if the first half of the
    // condition is met the second half isn't evaluated so this should be fine)
    // if it errors for your compiler, just split into two if statements
    if (head == NULL || head->next == NULL) {
        // free(NULL) just returns NULL, no errors so this is fine for empty list
        free(head);
        return NULL;
    }

    // finding deletion point
    while (curr->next->next != NULL) {
        curr = curr->next;
    }

    // pointer rearranging and free on last node
    struct node *delete_me = curr->next;
    curr->next = curr->next->next;
    free(delete_me);
    return head;
}

int num_items(struct node *head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

// frees all nodes in a list
void free_list(struct node *head) {
    struct  node *delete_me = head;
    while (head != NULL) {
        delete_me = head;
        head = head->next;
        free(delete_me);
    }
}