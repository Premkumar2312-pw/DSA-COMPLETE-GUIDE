#include <iostream>
using namespace std;

int main() {
    int size, pos;
    cout << "Enter the number of elements: ";
    cin >> size;
    
    int arr[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the position to delete (0 to " << size - 1 << "): ";
    cin >> pos;

    // Deleting element
    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;

    cout << "Array after deletion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
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
