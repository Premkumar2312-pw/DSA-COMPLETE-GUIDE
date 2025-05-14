import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter the number of elements: ");
        int size = sc.nextInt();
        
        int[] arr = new int[size + 1];
        System.out.println("Enter " + size + " elements: ");
        for (int i = 0; i < size; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.print("Enter the position to insert (0 to " + size + "): ");
        int pos = sc.nextInt();
        System.out.print("Enter the value to insert: ");
        int val = sc.nextInt();
        
        // Shifting elements for insertion
        for (int i = size; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = val;
        size++;

        System.out.print("Array after insertion: ");
        for (int i = 0; i < size; i++) {
            System.out.print(arr[i] + " ");
        }
        sc.close();
    }
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
