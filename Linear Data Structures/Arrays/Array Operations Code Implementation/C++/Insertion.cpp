#include <iostream>
using namespace std;

int main() {
    int size, pos, val;
    cout << "Enter the number of elements: ";
    cin >> size;
    
    int arr[size + 1];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the position to insert (0 to " << size << "): ";
    cin >> pos;
    cout << "Enter the value to insert: ";
    cin >> val;

    // Inserting element
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    size++;

    cout << "Array after insertion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
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
