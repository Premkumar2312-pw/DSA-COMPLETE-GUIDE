#include <stdio.h>

int main() {
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("1D Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

/* 
Sample Output:
Input:
Enter the number of elements: 5
Enter 5 elements: 1 2 3 4 5

Output:
1D Array: 1 2 3 4 5
*/
