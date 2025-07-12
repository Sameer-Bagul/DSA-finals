#include <bits/stdc++.h>
using namespace std;

// Binary Search Implementation
int binarySearch(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1; // Not found
}

// Linear Search Implementation
int linearSearch(vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1; // Not found
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15};
    int target = 7;
    
    cout << "Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    // Binary Search (array must be sorted)
    int binaryResult = binarySearch(arr, target);
    cout << "Binary Search for " << target << ": ";
    if (binaryResult != -1) {
        cout << "Found at index " << binaryResult << endl;
    } else {
        cout << "Not found" << endl;
    }
    
    // Linear Search
    int linearResult = linearSearch(arr, target);
    cout << "Linear Search for " << target << ": ";
    if (linearResult != -1) {
        cout << "Found at index " << linearResult << endl;
    } else {
        cout << "Not found" << endl;
    }
    
    return 0;
}
