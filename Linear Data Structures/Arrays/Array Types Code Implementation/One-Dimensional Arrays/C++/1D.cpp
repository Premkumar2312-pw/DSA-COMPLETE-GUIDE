#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "1D Array: ";
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

Output:
1D Array: 1 2 3 4 5
*/
