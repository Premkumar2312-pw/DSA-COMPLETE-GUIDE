#include <stdio.h>

int main() {
    int size, pos, new_val;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to update (0 to %d): ", size - 1);
    scanf("%d", &pos);

    printf("Enter the new value: ");
    scanf("%d", &new_val);

    // Updating element
    arr[pos] = new_val;

    printf("Array after update: ");
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
Enter the position to update (0 to 4): 2
Enter the new value: 10

Output:
Array after update: 1 2 10 4 5
*/
