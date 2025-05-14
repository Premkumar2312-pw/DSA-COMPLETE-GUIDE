#include <iostream>
using namespace std;

int main() {
    int layers, rows, cols;

    // Getting user input for layers, rows, and columns
    cout << "Enter the number of layers: ";
    cin >> layers;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Declaration of 3D array
    int arr[layers][rows][cols];

    // Getting user input for array elements
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < layers; i++) {
        for (int j = 0; j < rows; j++) {
            for (int k = 0; k < cols; k++) {
                cin >> arr[i][j][k];
            }
        }
    }

    // Displaying the 3D array
    cout << "3D Array:" << endl;
    for (int i = 0; i < layers; i++) {
        cout << "Layer " << i + 1 << ":" << endl;
        for (int j = 0; j < rows; j++) {
            for (int k = 0; k < cols; k++) {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}

/*
Sample Output:
Input:
Enter the number of layers: 2
Enter the number of rows: 2
Enter the number of columns: 2
Enter the elements of the array:
1 2
3 4
5 6
7 8

Output:
3D Array:
Layer 1:
1 2
3 4
Layer 2:
5 6
7 8
*/
