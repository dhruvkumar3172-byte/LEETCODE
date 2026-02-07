class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int i = 0;

        if(n < 1){
            return -1;
        }
        if(n == 1){
            return 0;
        }

         if(i == 0 && nums[i] > nums[i+1]){
            return 0;
         
        }
           

        
        while(i < n-1){

         if(nums[i] > nums[i+1] && nums[i] > nums[i-1]){

                return i;
            }
            else{
                i++;
            }

        }

         if(i == n-1 && nums[i] > nums[i-1]){
            
                return i;
            
        }
        return -1;
    }
};