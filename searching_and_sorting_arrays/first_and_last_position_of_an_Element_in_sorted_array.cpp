// Brute Force

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{   
    int firstPosition = -1;
    int lastPosition = -1;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] == k){
            if(firstPosition == -1){
                firstPosition = i;
            }
            lastPosition = i;
        }
    }
    
    return {firstPosition, lastPosition};
}


//  Optimised 

