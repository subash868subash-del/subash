#include <stdio.h>
#include <string.h>

#define MAX 10

char queue[MAX][10];
int front = -1, rear = -1;

// enqueue operation
void enqueue(char jobID[]) {
    if (rear == MAX - 1) {
        printf("Print queue is full\n");
        return;
    }
    if (front == -1)
        front = 0;
    rear++;
    strcpy(queue[rear], jobID);
    printf("Job %s added to queue\n", jobID);
}

// dequeue operation
void dequeue() {
    if (front == -1 || front > rear) {
        printf("No print jobs pending\n");
        return;
    }
    printf("Job %s printed\n", queue[front]);
    front++;
}

// front operation
void frontJob() {
    if (front == -1 || front > rear) {
        printf("No job to print\n");
        return;
    }
    printf("Next job: %s\n", queue[front]);
}

// isEmpty operation
void isEmpty() {
    if (front == -1 || front > rear)
        printf("Print queue is empty\n");
    else
        printf("Print jobs are pending\n");
}

// size operation
void size() {
    if (front == -1 || front > rear)
        printf("Pending jobs: 0\n");
    else
        printf("Pending jobs: %d\n", rear - front + 1);
}

int main() {
    // Sample Use Case
    enqueue("J1");
    enqueue("J2");
    enqueue("J3");

    dequeue();     
    frontJob();   
    size();        
    isEmpty();

    return 0;
}
