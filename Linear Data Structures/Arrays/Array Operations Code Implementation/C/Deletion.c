#include <stdio.h>

int main() {
    int size, pos;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete (0 to %d): ", size - 1);
    scanf("%d", &pos);

    // Deleting element
    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;

    printf("Array after deletion: ");
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
Enter the position to delete (0 to 4): 2

Output:
Array after deletion: 1 2 4 5
*/
