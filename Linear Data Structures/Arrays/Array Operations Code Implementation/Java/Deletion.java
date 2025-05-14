import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter the number of elements: ");
        int size = sc.nextInt();
        
        int[] arr = new int[size];
        System.out.println("Enter " + size + " elements: ");
        for (int i = 0; i < size; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.print("Enter the position to delete (0 to " + (size - 1) + "): ");
        int pos = sc.nextInt();
        
        // Deleting element
        for (int i = pos; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;

        System.out.print("Array after deletion: ");
        for (int i = 0; i < size; i++) {
            System.out.print(arr[i] + " ");
        }
        sc.close();
    }
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
