import java.util.Scanner;

public class MultiDimensionalArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Getting user input for layers, rows, and columns
        System.out.print("Enter the number of layers: ");
        int layers = sc.nextInt();
        System.out.print("Enter the number of rows: ");
        int rows = sc.nextInt();
        System.out.print("Enter the number of columns: ");
        int cols = sc.nextInt();

        // Declaration of 3D array
        int[][][] arr = new int[layers][rows][cols];

        // Getting user input for array elements
        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < layers; i++) {
            for (int j = 0; j < rows; j++) {
                for (int k = 0; k < cols; k++) {
                    arr[i][j][k] = sc.nextInt();
                }
            }
        }

        // Displaying the 3D array
        System.out.println("3D Array:");
        for (int i = 0; i < layers; i++) {
            System.out.println("Layer " + (i + 1) + ":");
            for (int j = 0; j < rows; j++) {
                for (int k = 0; k < cols; k++) {
                    System.out.print(arr[i][j][k] + " ");
                }
                System.out.println();
            }
        }

        sc.close();
    }
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
