#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct student {
    char name[30];
    char dept[10];
};


struct node {
    int roll;
    struct student s; 
     struct node *next;
};

int main() {
    struct node *head = NULL, *temp = NULL, *newnode = NULL;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("\nEnter Roll number: ");
        scanf("%d", &newnode->roll);

        printf("Enter Name: ");
        scanf("%s", newnode->s.name);

        printf("Enter Department: ");
        scanf("%s", newnode->s.dept);

        newnode->next = NULL;

       
        if (head == NULL) {
            head = newnode;
            temp = newnode;
        } 
        else {
            temp->next = newnode;
            temp = newnode;
        }
    }


    printf("\nStudent Records:\n");
    temp = head;
    while (temp != NULL) {
        printf("%d %s %s -> ", temp->roll, temp->s.name, temp->s.dept);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}