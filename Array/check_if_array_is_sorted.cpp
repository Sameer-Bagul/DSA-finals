#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;  // Found an unsorted pair
        }
    }
    return true;  // All pairs are sorted
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, size)) {
        cout << "Array is sorted" << endl;
    } else {
        cout << "Array is not sorted" << endl;
    }

    return 0;
}
