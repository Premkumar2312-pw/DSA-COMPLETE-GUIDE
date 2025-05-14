#include <iostream>
using namespace std;

int main() {
    int size, pos, new_val;
    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the position to update (0 to " << size - 1 << "): ";
    cin >> pos;

    cout << "Enter the new value: ";
    cin >> new_val;

    // Updating element
    arr[pos] = new_val;

    cout << "Array after update: ";
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
Enter the position to update (0 to 4): 2
Enter the new value: 10

Output:
Array after update: 1 2 10 4 5
*/
