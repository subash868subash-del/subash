#include <stdio.h>

#define MAX 10

int queue[MAX];
int front = -1, rear = -1;

// enqueue operation
void enqueue(int customerID) {
    if (rear == MAX - 1) {
        printf("Queue is full\n");
        return;
    }
    if (front == -1)
        front = 0;
    rear++;
    queue[rear] = customerID;
    printf("Customer %d added to queue\n", customerID);
}

// dequeue operation
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty. No customer to serve\n");
        return;
    }
    printf("Customer %d served\n", queue[front]);
    front++;
}

// front operation
void frontCustomer() {
    if (front == -1 || front > rear) {
        printf("No customer in queue\n");
        return;
    }
    printf("Current customer: %d\n", queue[front]);
}

// isEmpty operation
void isEmpty() {
    if (front == -1 || front > rear)
        printf("Queue is empty\n");
    else
        printf("Queue is not empty\n");
}

// size operation
void size() {
    if (front == -1 || front > rear)
        printf("Number of customers: 0\n");
    else
        printf("Number of customers: %d\n", rear - front + 1);
}

int main() {
    // Sample Use Case
    enqueue(101);
    enqueue(102);
    enqueue(103);

    dequeue();        
    frontCustomer();  
    size();           
    isEmpty();

    return 0;
}
