#include <stdio.h>

int main() {
    int N, A, B;

    // Input number of cities
    scanf("%d", &N);

    int matrix[N][N];

    // Input adjacency matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Input two cities
    scanf("%d %d", &A, &B);

    // Check direct connection
    if (matrix[A][B] == 1) {
        printf("Connected");
    } else {
        printf("Not Connected");
    }

    return 0;
}
