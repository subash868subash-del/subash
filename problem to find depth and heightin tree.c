#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int adj[MAX][MAX];   // adjacency matrix
int visited[MAX];
int queue[MAX];
int front = -1, rear = -1;
int N;

/* Queue functions for BFS */
void enqueue(int v) {
    if (rear == MAX - 1)
        return;
    if (front == -1)
        front = 0;
    queue[++rear] = v;
}

int dequeue() {
    if (front == -1 || front > rear)
        return -1;
    return queue[front++];
}

/* DFS function */
void DFS(int v) {
    printf("%d ", v);
    visited[v] = 1;

    for (int i = 0; i < N; i++) {
        if (adj[v][i] == 1 && !visited[i]) {
            DFS(i);
        }
    }
}

/* BFS function */
void BFS(int start) {
    for (int i = 0; i < N; i++)
        visited[i] = 0;

    printf("%d ", start);
    visited[start] = 1;
    enqueue(start);

    while (front <= rear) {
        int v = dequeue();
        for (int i = 0; i < N; i++) {
            if (adj[v][i] == 1 && !visited[i]) {
                printf("%d ", i);
                visited[i] = 1;
                enqueue(i);
            }
        }
    }
}

/* Main function */
int main() {
    int edges, u, v, start;

    printf("Enter number of computers (nodes): ");
    scanf("%d", &N);

    printf("Enter number of connections (edges): ");
    scanf("%d", &edges);

    // Initialize adjacency matrix
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            adj[i][j] = 0;

    printf("Enter the connections (u v):\n");
    for (int i = 0; i < edges; i++) {
        scanf("%d %d", &u, &v);
        adj[u][v] = 1;
        adj[v][u] = 1; // undirected graph
    }

    printf("Enter starting computer: ");
    scanf("%d", &start);

    printf("\nDFS Traversal: ");
    for (int i = 0; i < N; i++)
        visited[i] = 0;
    DFS(start);

    printf("\nBFS Traversal: ");
    front = rear = -1;
    BFS(start);

    return 0;
}