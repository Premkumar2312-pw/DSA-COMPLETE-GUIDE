import java.util.HashSet;
import java.util.Scanner;

public class Main {
    public static void removeDuplicates(int[] arr, int n) {
        HashSet<Integer> set = new HashSet<>();
        int index = 0;
        for (int i = 0; i < n; i++) {
            if (!set.contains(arr[i])) {
                set.add(arr[i]);
                arr[index++] = arr[i];
            }
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of elements: ");
        int n = scanner.nextInt();
        
        int[] arr = new int[n];
        System.out.println("Enter the elements: ");
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }

        removeDuplicates(arr, n);
        System.out.print("Array after removing duplicates: ");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
