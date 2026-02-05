#include <stdio.h>

#define MAX 10

int graph[MAX][MAX];
int visited[MAX];
int queue[MAX];
int front = 0, rear = -1;
int N;

// DFS function
void DFS(int node)
{
    visited[node] = 1;
    printf("%d ", node);

    for (int i = 0; i < N; i++)
    {
        if (graph[node][i] == 1 && visited[i] == 0)
            DFS(i);
    }
}

// BFS function
void BFS(int start)
{
    for (int i = 0; i < N; i++)
        visited[i] = 0;

    front = 0;
    rear = -1;

    queue[++rear] = start;
    visited[start] = 1;

    while (front <= rear)
    {
        int node = queue[front++];
        printf("%d ", node);

        for (int i = 0; i < N; i++)
        {
            if (graph[node][i] == 1 && visited[i] == 0)
            {
                visited[i] = 1;
                queue[++rear] = i;
            }
        }
    }
}

int main()
{
    N = 6;

    // Initialize graph
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            graph[i][j] = 0;

    // Given connections
    graph[0][1] = graph[1][0] = 1;
    graph[0][2] = graph[2][0] = 1;
    graph[1][3] = graph[3][1] = 1;
    graph[1][4] = graph[4][1] = 1;
    graph[2][5] = graph[5][2] = 1;

    printf("DFS traversal: ");
    for (int i = 0; i < N; i++)
        visited[i] = 0;
    DFS(0);

    printf("\nBFS traversal: ");
    BFS(0);

    return 0;
}