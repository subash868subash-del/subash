#include <stdio.h>
int main() {
    int N, A, B;
    printf("Enter number of cities: ");
    if (scanf("%d", &N) != 1) return 1;
    int matrix[N][N];
    printf("Enter the adjacency matrix (%d x %d):\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Enter city A and B to check: ");
    scanf("%d %d", &A, &B);
    if (A >= 0 && A < N && B >= 0 && B < N) {
        if (matrix[A][B] == 1) {
            printf("Connected\n");
        } else {
            printf("Not connected\n");
        }
    } else {
        printf("Invalid city indices.\n");
    }

    return 0;
}