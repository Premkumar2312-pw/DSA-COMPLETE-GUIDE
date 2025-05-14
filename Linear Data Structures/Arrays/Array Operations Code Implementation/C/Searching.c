#include <stdio.h>

int main() {
    int size, search, found = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to search: ");
    scanf("%d", &search);

    // Searching for the element
    for (int i = 0; i < size; i++) {
        if (arr[i] == search) {
            printf("Element %d found at index %d\n", search, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element %d not found in the array\n", search);
    }

    return 0;
}

/* 
Sample Output:
Input:
Enter the number of elements: 5
Enter 5 elements: 1 2 3 4 5
Enter the value to search: 3

Output:
Element 3 found at index 2
*/
