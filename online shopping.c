#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct order {
    char id[10];
    struct order *next;
};

struct order *front = NULL;
struct order *rear = NULL;

// enqueue operation
void enqueue(char orderID[]) {
    struct order *newOrder =
        (struct order *)malloc(sizeof(struct order));

    strcpy(newOrder->id, orderID);
    newOrder->next = NULL;

    if (rear == NULL) {   // queue empty
        front = rear = newOrder;
    } else {
        rear->next = newOrder;
        rear = newOrder;
    }

    printf("Order %s placed\n", orderID);
}

// dequeue operation
void dequeue() {
    if (front == NULL) {
        printf("No orders to process\n");
        return;
    }

    struct order *temp = front;
    printf("Order %s processed\n", temp->id);
    front = front->next;

    if (front == NULL)
        rear = NULL;

    free(temp);
}

// front operation
void frontOrder() {
    if (front == NULL) {
        printf("No pending orders\n");
        return;
    }
    printf("Next order: %s\n", front->id);
}

// isEmpty operation
void isEmpty() {
    if (front == NULL)
        printf("All orders completed\n");
    else
        printf("Orders pending\n");
}

// size operation
void size() {
    int count = 0;
    struct order *temp = front;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    printf("Pending orders: %d\n", count);
}

int main() {
    // Sample Use Case
    enqueue("O101");
    enqueue("O102");
    enqueue("O103");

    dequeue();       
    frontOrder();    
    size();         
    isEmpty();

    return 0;
}
