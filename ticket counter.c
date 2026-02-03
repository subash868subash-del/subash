#include <stdio.h>
#define MAX 5   //size of an array

int queue[MAX];
int front = -1;
int rear = -1;

// enqueue operation
void enqueue(int customerID) {
    if (rear == MAX - 1) {
        printf("Queue is full. Cannot add customer %d\n", customerID);
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = customerID;
        printf("Customer %d added to queue\n", customerID);
    }
}

// dequeue operation
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty. No customer to serve\n");
    } else {
        printf("Customer served: %d\n", queue[front]);
        front++;
    }
}

 //front operation
void frontCustomer() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Customer at front: %d\n", queue[front]);
    }
}

// isEmpty operation
void isEmpty() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Queue is not empty\n");
    }
}

// size operation
void size() {
    if (front == -1 || front > rear) {
        printf("Queue size: 0\n");
    } else {
        printf("Queue size: %d\n", rear - front + 1);
    }
}

int main() {

   
    enqueue(101);
    enqueue(102);
    enqueue(103);

    dequeue();        
    frontCustomer();  
    size();           

    return 0;
}