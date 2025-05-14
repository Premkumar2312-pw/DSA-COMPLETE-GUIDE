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

        System.out.print("Enter the value to search: ");
        int search = sc.nextInt();
        boolean found = false;

        // Searching for the element
        for (int i = 0; i < size; i++) {
            if (arr[i] == search) {
                System.out.println("Element " + search + " found at index " + i);
                found = true;
                break;
            }
        }

        if (!found) {
            System.out.println("Element " + search + " not found in the array");
        }

        sc.close();
    }
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
