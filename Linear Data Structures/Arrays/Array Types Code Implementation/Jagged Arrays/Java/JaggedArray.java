import java.util.Scanner;

public class JaggedArrayExample {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Getting user input for number of rows
        System.out.print("Enter the number of rows: ");
        int rows = sc.nextInt();

        // Declaring a jagged array
        int[][] arr = new int[rows][];

        // Getting user input for each row's size and elements
        for (int i = 0; i < rows; i++) {
            System.out.print("Enter the number of columns for row " + (i + 1) + ": ");
            int cols = sc.nextInt();
            arr[i] = new int[cols];

            System.out.println("Enter the elements of row " + (i + 1) + ":");
            for (int j = 0; j < cols; j++) {
                arr[i][j] = sc.nextInt();
            }
        }

        // Displaying the jagged array
        System.out.println("Jagged Array:");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }

        sc.close();
    }
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
