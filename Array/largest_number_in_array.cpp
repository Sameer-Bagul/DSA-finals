#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int largest = nums[0];
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > largest) {
                largest = nums[i];
            } 
        }
        return largest;
    }
};

int main() {
    vector<int> arr = {1, 3, 4, 56, 3, 78, 12};
    
    Solution sol;
    int largest = sol.largestElement(arr);
    
    cout << "Array: ";
    for(int num : arr) {
        cout << num << " ";
    }
    cout << "\nThe largest number is: " << largest << endl;
    
    return 0;
}