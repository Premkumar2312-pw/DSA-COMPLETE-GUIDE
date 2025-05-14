#include <stdio.h>

int main() {
    int layers, rows, cols;

    // Getting user input for layers, rows, and columns
    printf("Enter the number of layers: ");
    scanf("%d", &layers);
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declaration of 3D array
    int arr[layers][rows][cols];

    // Getting user input for array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < layers; i++) {
        for (int j = 0; j < rows; j++) {
            for (int k = 0; k < cols; k++) {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    // Displaying the 3D array
    printf("3D Array:\n");
    for (int i = 0; i < layers; i++) {
        printf("Layer %d:\n", i + 1);
        for (int j = 0; j < rows; j++) {
            for (int k = 0; k < cols; k++) {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
    }

    return 0;
}

/*
Sample Output:
Input:
Enter the number of layers: 2
Enter the number of rows: 2
Enter the number of columns: 2
Enter the elements of the array:
1 2
3 4
5 6
7 8

Output:
3D Array:
Layer 1:
1 2
3 4
Layer 2:
5 6
7 8
*/
