#include <bits/stdc++.h>
using namespace std;


// Function to find the largest number 
int largestElement(int nums[], int size) {
        int largest =  nums[0];
        for(int i = 0 ; i < size; i++ ) {
            if(nums[i] > largest){
                largest = nums[i];
            } 
        }
        return largest;
}

// function to Find Second Largest number in array
int SecondlargestElement(int nums[], int largest, int size) {
    
    int Secondlargest = INT_MIN ;
    for (int i = 0; i < size; i++) {
        if (nums[i] < largest && nums[i] > Secondlargest) {
            Secondlargest = nums[i];
        }
        
    }
    
    return Secondlargest;
}

int main() {
    int arr[] = {1, 3, 4, 56, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int largestNumber = largestElement(arr, size);
    int secontLargeNumber = SecondlargestElement(arr, largestNumber, size);

    cout << "The largest number is: " << largestNumber << endl;
    cout << "The second largest number is: " << secontLargeNumber << endl;
    
    return 0;
}


