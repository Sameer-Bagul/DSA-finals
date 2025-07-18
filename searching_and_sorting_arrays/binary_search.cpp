#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size-1;

    int midIndex = start + ((end- start)/2);
    
    while (start<=end){
        if (arr[midIndex] == key){
            return midIndex;
        }
        if (key > arr[midIndex]){
            // Going to Right side of the mid 
            start = midIndex + 1;
        } else {
            // Going to Left part from the mid 
            end = midIndex - 1;
        }

        // midIndex = (start + end) / 2; // this can be wrong in the karge values of start and end 
        midIndex = start + ((end- start)/2);
    }
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    int index = binarySearch(even, 6, 12);
    cout << "Index of 12 is :" << index << endl;

    return 0;
}