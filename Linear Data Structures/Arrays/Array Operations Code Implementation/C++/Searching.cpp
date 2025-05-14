#include <iostream>
using namespace std;

int main() {
    int size, search, found = 0;
    cout << "Enter the number of elements: ";
    cin >> size;
    
    int arr[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the value to search: ";
    cin >> search;

    // Searching for the element
    for (int i = 0; i < size; i++) {
        if (arr[i] == search) {
            cout << "Element " << search << " found at index " << i << endl;
            found = 1;
            break;
        }
    }

    if (!found) {
        cout << "Element " << search << " not found in the array" << endl;
    }

    return 0;
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
