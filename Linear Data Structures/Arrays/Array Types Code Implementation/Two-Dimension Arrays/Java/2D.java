import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of rows: ");
        int rows = sc.nextInt();
        System.out.print("Enter the number of columns: ");
        int cols = sc.nextInt();

        int[][] arr = new int[rows][cols];
        System.out.println("Enter elements in the " + rows + "x" + cols + " matrix: ");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                arr[i][j] = sc.nextInt();
            }
        }

        System.out.println("2D Array (Matrix): ");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
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
Enter the number of columns: 3
Enter elements in the 2x3 matrix: 
1 2 3
4 5 6

Output:
2D Array (Matrix): 
1 2 3 
4 5 6 
*/
