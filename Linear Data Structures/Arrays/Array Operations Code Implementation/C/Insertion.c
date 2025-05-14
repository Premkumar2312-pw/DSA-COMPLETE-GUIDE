#include <stdio.h>

int main() {
    int size, pos, val;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    
    int arr[size + 1];
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert (0 to %d): ", size);
    scanf("%d", &pos);
    printf("Enter the value to insert: ");
    scanf("%d", &val);

    // Inserting element
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    size++;

    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
/*
Input:
Enter the number of elements: 5
Enter 5 elements: 1 2 3 4 5
Enter the position to insert (0 to 5): 2
Enter the value to insert: 10

Output:
Array after insertion: 1 2 10 3 4 5 
*/
