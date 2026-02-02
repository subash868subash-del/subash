#include <stdio.h>
#include <stdlib.h>

struct song {
    int songID;
    struct song *prev;
    struct song *next;
};

void insertAtBeginning(struct song **head, int id) {
    struct song *newNode = (struct song*)malloc(sizeof(struct song));

    newNode->songID = id;
    newNode->prev = NULL;
    newNode->next = *head;

    if (*head != NULL) {
        (*head)->prev = newNode;
    }

    *head = newNode;
}

void displayForward(struct song *head) {
    while (head != NULL) {
        printf("%d <-> ", head->songID);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct song *head = NULL;

    insertAtBeginning(&head, 30);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 10);

    displayForward(head);

    return 0;
}