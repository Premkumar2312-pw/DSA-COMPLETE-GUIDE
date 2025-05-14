#include <stdio.h>

void rotateArray(int arr[], int n, int d) {
    for (int i = 0; i < d; i++) {
        int temp = arr[0];
        for (int j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = temp;
    }
}

int main() {
    int n, d;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of rotations: ");
    scanf("%d", &d);

    rotateArray(arr, n, d);

    printf("Array after rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
