#include <stdio.h>

int findSecondLargest(int arr[], int n) {
    int largest = arr[0], secondLargest = -1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
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

    int secondLargest = findSecondLargest(arr, n);
    printf("Second largest element: %d\n", secondLargest);

    return 0;
}
