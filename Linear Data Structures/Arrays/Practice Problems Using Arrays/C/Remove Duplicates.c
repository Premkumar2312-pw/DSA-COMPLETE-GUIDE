#include <stdio.h>

void removeDuplicates(int arr[], int *n) {
    int newSize = 0;
    for (int i = 0; i < *n; i++) {
        int j;
        for (j = 0; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                break;
            }
        }
        if (j == newSize) {
            arr[newSize++] = arr[i];
        }
    }
    *n = newSize;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    removeDuplicates(arr, &n);
    printf("Array after removing duplicates: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
