#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *new_node(int data);
void print_list(struct node *head);

int main(void) {
    struct node *head = new_node(4);
    head->next = new_node(6);
    head->next->next = new_node(17);
    print_list(head);
    return 0;
}

struct node *new_node(int data) {
    struct node *node = malloc(sizeof(struct node));
    node->data = data;
    node->next = NULL;
    return node;
}

void print_list(struct node *head) {
    while(head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}