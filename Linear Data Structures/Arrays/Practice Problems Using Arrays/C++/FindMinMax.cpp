#include <iostream>
#include <climits>
using namespace std;

void findMaxMin(int arr[], int n) {
    int max = INT_MIN, min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    cout << "Max: " << max << ", Min: " << min << endl;
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

    findMaxMin(arr, n);
    return 0;
}
