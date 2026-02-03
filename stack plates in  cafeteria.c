#include <stdio.h>
#include <stdlib.h>

struct plate {
    int id;
    struct plate *next;
};

struct plate *top = NULL;

// push operation
void push(int plateID) {
    struct plate *newPlate = (struct plate *)malloc(sizeof(struct plate));
    newPlate->id = plateID;
    newPlate->next = top;
    top = newPlate;
    printf("Plate %d added\n", plateID);
}

// pop operation
void pop() {
    if (top == NULL) {
        printf("No plate to remove\n");
        return;
    }
    struct plate *temp = top;
    printf("Plate %d removed\n", temp->id);
    top = top->next;
    free(temp);
}

// peek operation
void peek() {
    if (top == NULL) {
        printf("No plate on top\n");
        return;
    }
    printf("Top plate: %d\n", top->id);
}

// isEmpty operation
void isEmpty() {
    if (top == NULL)
        printf("Stack is empty\n");
    else
        printf("Stack is not empty\n");
}

// size operation
void size() {
    int count = 0;
    struct plate *temp = top;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    printf("Number of plates: %d\n", count);
}

int main() {
    // Sample Use Case
    push(1);   
    push(2);   
    push(3);  

    pop();     
    peek();    
    size();    
    isEmpty();

    return 0;
}
