#include <stdio.h>

int N;
int graph[20][20];
int visited[20];

// DFS function
void DFS(int v) {
    visited[v] = 1;
    printf("%d ", v);

    for (int i = 0; i < N; i++) {
        if (graph[v][i] == 1 && !visited[i]) {
            DFS(i);
        }
    }
}

// BFS function
void BFS(int start) {
    int queue[20], front = 0, rear = 0;
    int visitedBFS[20] = {0};

    queue[rear++] = start;
    visitedBFS[start] = 1;

    while (front < rear) {
        int v = queue[front++];
        printf("%d ", v);

        for (int i = 0; i < N; i++) {
            if (graph[v][i] == 1 && !visitedBFS[i]) {
                queue[rear++] = i;
                visitedBFS[i] = 1;
            }
        }
    }
}

int main() {
    int S;

    // Input number of vertices
    scanf("%d", &N);

    // Input adjacency matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    // Input starting vertex
    scanf("%d", &S);

    // BFS Traversal
    printf("BFS Traversal: ");
    BFS(S);
    printf("\n");

    // DFS Traversal
    printf("DFS Traversal: ");
    DFS(S);

    return 0;
}
