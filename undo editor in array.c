#include <stdio.h>

#define MAX 10

int stack[MAX];
int top = -1;

// push operation
void push(int action) {
    if (top == MAX - 1) {
        printf("Stack is full. Cannot add action.\n");
        return;
    }
    top++;
    stack[top] = action;
    printf("Action %d saved.\n", action);
}

// pop operation (undo)
void pop() {
    if (top == -1) {
        printf("No action to undo.\n");
        return;
    }
    printf("Undo action %d\n", stack[top]);
    top--;
}

// peek operation
void peek() {
    if (top == -1) {
        printf("No recent action.\n");
        return;
    }
    printf("Last action: %d\n", stack[top]);
}

// isEmpty operation
void isEmpty() {
    if (top == -1)
        printf("Undo not possible (stack empty).\n");
    else
        printf("Undo is possible.\n");
}

// size operation
void size() {
    printf("Actions available for undo: %d\n", top + 1);
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
#include <stdio.h>

#define MAX 10

int stack[MAX];
int top = -1;

// push operation
void push(int action) {
    if (top == MAX - 1) {
        printf("Stack is full. Cannot add action.\n");
        return;
    }
    top++;
    stack[top] = action;
    printf("Action %d saved.\n", action);
}

// pop operation (undo)
void pop() {
    if (top == -1) {
        printf("No action to undo.\n");
        return;
    }
    printf("Undo action %d\n", stack[top]);
    top--;
}

// peek operation
void peek() {
    if (top == -1) {
        printf("No recent action.\n");
        return;
    }
    printf("Last action: %d\n", stack[top]);
}

// isEmpty operation
void isEmpty() {
    if (top == -1)
        printf("Undo not possible (stack empty).\n");
    else
        printf("Undo is possible.\n");
}

// size operation
void size() {
    printf("Actions available for undo: %d\n", top + 1);
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
