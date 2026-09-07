#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

void insert(struct node **head, int x, int pos) {

    struct node *newnode = malloc(sizeof(struct node));

    if (newnode == NULL) {
        return;
    }

    newnode->data = x;

    if (pos == 1) {

        newnode->prev = NULL;
        newnode->next = *head;

        if (*head != NULL) {
            (*head)->prev = newnode;
        }

        *head = newnode;
    }
    else {

        struct node *temp = *head;

        for (int i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp != NULL) {

            newnode->next = temp->next;
            newnode->prev = temp;

            if (temp->next != NULL) {
                temp->next->prev = newnode;
            }

            temp->next = newnode;
        }
        else {
            free(newnode);
        }
    }
}

void display(struct node *head) {

    struct node *temp = head;

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

int main() {

    struct node *head = NULL;

    insert(&head, 10, 1);
    insert(&head, 20, 1);
    insert(&head, 30, 1);

    display(head);

    printf("code completes\n");

    return 0;
}

