#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows;

    // Getting user input for number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Declaring a jagged array (array of pointers)
    int *arr[rows];

    // Getting user input for each row's size and elements
    for (int i = 0; i < rows; i++) {
        int cols;
        printf("Enter the number of columns for row %d: ", i + 1);
        scanf("%d", &cols);

        // Allocating memory dynamically for each row
        arr[i] = (int *)malloc(cols * sizeof(int));

        printf("Enter the elements of row %d:\n", i + 1);
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Displaying the jagged array
    printf("Jagged Array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < sizeof(arr[i]) / sizeof(arr[i][0]); j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Freeing allocated memory
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }

    return 0;
}

/*
Sample Output:
Input:
Enter the number of rows: 2
Enter the number of columns for row 1: 3
Enter the elements of row 1:
1 2 3
Enter the number of columns for row 2: 2
Enter the elements of row 2:
4 5

Output:
Jagged Array:
1 2 3
4 5
*/
