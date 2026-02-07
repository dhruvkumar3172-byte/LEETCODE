class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
         int n = arr.size();
         int i = 0;
        
        while(i < n-1){

         if(arr[i] > arr[i+1] && arr[i] > arr[i-1]){

                return i;
            }
            else{
                i++;
            }

        }

        
        return -1;
        
    }
};