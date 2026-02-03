#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct call {
    char name[20];
    struct call *next;
};

struct call *top = NULL;

// push operation (function call)
void push(char fname[]) {
    struct call *newCall = (struct call *)malloc(sizeof(struct call));
    strcpy(newCall->name, fname);
    newCall->next = top;
    top = newCall;
    printf("Function %s called\n", fname);
}

// pop operation (function ends)
void pop() {
    if (top == NULL) {
        printf("No function to end\n");
        return;
    }
    struct call *temp = top;
    printf("Function %s ended\n", temp->name);
    top = top->next;
    free(temp);
}

// peek operation
void peek() {
    if (top == NULL) {
        printf("No function executing\n");
        return;
    }
    printf("Currently executing: %s\n", top->name);
}

// isEmpty operation
void isEmpty() {
    if (top == NULL)
        printf("Program execution completed\n");
    else
        printf("Program still running\n");
}

// size operation
void size() {
    int count = 0;
    struct call *temp = top;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    printf("Active function calls: %d\n", count);
}

int main() {
    // Sample Use Case
    push("main");
    push("func1");
    push("func2");

    pop();   
    peek();    
    size();    
    isEmpty();

    return 0;
}