#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct patient {
    char id[10];
    struct patient *next;
};

struct patient *front = NULL;
struct patient *rear = NULL;

// enqueue operation
void enqueue(char patientID[]) {
    struct patient *newPatient =
        (struct patient *)malloc(sizeof(struct patient));

    strcpy(newPatient->id, patientID);
    newPatient->next = NULL;

    if (rear == NULL) {   // queue empty
        front = rear = newPatient;
    } else {
        rear->next = newPatient;
        rear = newPatient;
    }

    printf("Patient %s registered\n", patientID);
}

// dequeue operation
void dequeue() {
    if (front == NULL) {
        printf("No patient waiting\n");
        return;
    }

    struct patient *temp = front;
    printf("Patient %s attended\n", temp->id);
    front = front->next;

    if (front == NULL)
        rear = NULL;

    free(temp);
}

// front operation
void frontPatient() {
    if (front == NULL) {
        printf("No patient being attended\n");
        return;
    }
    printf("Current patient: %s\n", front->id);
}

// isEmpty operation
void isEmpty() {
    if (front == NULL)
        printf("No patients in queue\n");
    else
        printf("Patients are waiting\n");
}

// size operation
void size() {
    int count = 0;
    struct patient *temp = front;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    printf("Number of patients waiting: %d\n", count);
}

int main() {
    // Sample Use Case
    enqueue("P1");
    enqueue("P2");
    enqueue("P3");

    dequeue();        
    frontPatient();  
    size();         
    isEmpty();

    return 0;
}
