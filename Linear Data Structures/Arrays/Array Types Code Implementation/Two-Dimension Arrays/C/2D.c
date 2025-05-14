#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];
    printf("Enter elements in the %dx%d matrix: \n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("2D Array (Matrix): \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/* 
Sample Output:
Input:
Enter the number of rows: 2
Enter the number of columns: 3
Enter elements in the 2x3 matrix: 
1 2 3
4 5 6

Output:
2D Array (Matrix): 
1 2 3 
4 5 6 
*/
