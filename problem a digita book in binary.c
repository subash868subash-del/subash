#include <stdio.h>

int main() {
    int n, key;
    int low, high, mid;

    printf("Enter number of chapters: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter starting page numbers in sorted order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter page number to check: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Page %d is the beginning of a chapter", key);
            return 0;
        } 
        else if (arr[mid] < key) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }

    printf("Page %d is not the beginning of a chapter", key);
    return 0;
}
