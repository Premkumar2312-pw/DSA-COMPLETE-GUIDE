#include <iostream>
using namespace std;

void removeDuplicates(int arr[], int& n) {
    int newSize = 0;
    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                break;
            }
        }
        if (j == newSize) {
            arr[newSize++] = arr[i];
        }
    }
    n = newSize;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    removeDuplicates(arr, n);
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
