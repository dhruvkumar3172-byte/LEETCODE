class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
         int n = arr.size();
        int i = 0;

        if(n < 1){
            return -1;
        }
        if(n == 1){
            return 0;
        }

         if(i == 0 && arr[i] > arr[i+1]){
            return 0;
         
        }
           

        
        while(i < n-1){

         if(arr[i] > arr[i+1] && arr[i] > arr[i-1]){

                return i;
            }
            else{
                i++;
            }

        }

         if(i == n-1 && arr[i] > arr[i-1]){
            
                return i;
            
        }
        return -1;
        
    }
};