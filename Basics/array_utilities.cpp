#include <bits/stdc++.h>
using namespace std;

// Utility functions for common DSA operations

// Print array
void printArray(int arr[], int size) {
    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Print vector
void printVector(vector<int>& vec) {
    cout << "Vector: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

// Calculate array sum
int arraySum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Find minimum element
int findMin(int arr[], int size) {
    int min_val = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }
    return min_val;
}

// Find maximum element
int findMax(int arr[], int size) {
    int max_val = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}

// Reverse array
void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Check if array is sorted
bool isSorted(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[i-1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "=== Array Utility Functions Demo ===" << endl;
    
    printArray(arr, size);
    
    cout << "Sum: " << arraySum(arr, size) << endl;
    cout << "Min: " << findMin(arr, size) << endl;
    cout << "Max: " << findMax(arr, size) << endl;
    cout << "Is Sorted: " << (isSorted(arr, size) ? "Yes" : "No") << endl;
    
    cout << "\nReversing array..." << endl;
    reverseArray(arr, size);
    printArray(arr, size);
    
    return 0;
}
