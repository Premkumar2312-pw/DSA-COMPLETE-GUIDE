#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows;

    // Getting user input for number of rows
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Declaring a jagged array using vectors
    vector<vector<int>> arr(rows);

    // Getting user input for each row's size and elements
    for (int i = 0; i < rows; i++) {
        int cols;
        cout << "Enter the number of columns for row " << i + 1 << ": ";
        cin >> cols;

        arr[i].resize(cols);

        cout << "Enter the elements of row " << i + 1 << ":\n";
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Displaying the jagged array
    cout << "Jagged Array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < arr[i].size(); j++) {
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
Enter the number of columns for row 1: 3
Enter the elements of row 1:
1 2 3
Enter the number of columns for row 2: 2
Enter the elements of row 2:
4 5

Output:
Jagged Array:
1 2 3
4 5
*/
