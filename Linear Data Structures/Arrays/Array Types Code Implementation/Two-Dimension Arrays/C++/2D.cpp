#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int arr[rows][cols];
    cout << "Enter elements in the " << rows << "x" << cols << " matrix: \n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "2D Array (Matrix): \n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/* 
Sample Output:
Input:
Enter the number of rows: 2
Enter the number of columns: 3
Enter elements in the 2x3 matrix: 
1 2 3
4 5 6

Output:
2D Array (Matrix): 
1 2 3 
4 5 6 
*/
