// Jonathan Atkinson & COMP1511 H09C 23T3
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *create_node(int data);
void free_list(struct node *head);
void print_list(struct node *curr);
struct node *insert_nth(struct node *head, int n, int data);

int main(void) {
    // struct node *head = setup_list(head);
    struct node *head = NULL;

    print_list(head);

    // inserting when list is empty
    head = insert_nth(head, 10, 0);
    print_list(head);
    
    // inserting with n < 0
    head = insert_nth(head, -34, 1);
    print_list(head);
    
    // inserting with n == 0
    head = insert_nth(head, 0, 2);
    print_list(head);
    
    // inserting between two nodes
    head = insert_nth(head, 1, 3);
    print_list(head);
    
    // inserting when n > length of list
    head = insert_nth(head, 10, 4);
    print_list(head);

    free_list(head);

    return 0;
}

// mallocs a struct node and returns a pointer to the node
// return NULL if malloc fails
struct node *create_node(int data) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void free_list(struct node *head) {
    while (head != NULL) {
        struct node *delete_me = head;
        head = head->next;
        free(delete_me);
    }
}

void print_list(struct node *curr) {
    while (curr != NULL) {
        printf("%2d -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");
}

// inserts a new struct node at the nth position in the list
// returns a pointer to the head of the list (first node)
struct node *insert_nth(struct node *head, int n, int data) {
    // creating the new node
    struct node *new_node = create_node(data);

    // n is any value, and the list is empty (Diagram 1).
    // n = 0, and the list is any length (Diagram 1, 2 or 3).
    // n < 0, and the list is any length
    if (n <= 0 || head == NULL) {
        new_node->next = head;
        return new_node;
    }

    // n is greater than the length of the linked list.
    // n is less than the length of the list, and the list is not empty (Diagram 2, 3).
    struct node *curr = head;
    while (n > 1 && curr->next != NULL) {
        curr = curr->next;
        n--;
    }
    new_node->next = curr->next;
    curr->next = new_node;
    
    // return the head in case it's value changes (won't here but does in previous case)
    return head;
}