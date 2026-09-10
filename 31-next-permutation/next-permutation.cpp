class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int n = nums.size();
        int pivot = -1;

        for(int i = n-1; i > 0; i--){
            if(nums[i-1] < nums[i]){
                pivot = i-1;
                break;
            }
           
        }
         if(pivot == -1){
                reverse(nums.begin(), nums.end());
                return;
            }
        
        int mini = INT_MAX;
        for(int i = pivot + 1; i < n; i++){
            if(nums[pivot] < nums[i]){
             if(mini > nums[i]){
                mini = nums[i];
             }
            }
        }

        for(int i = n-1; i > pivot; i--){
            if(mini == nums[i]){
                swap(nums[i] , nums[pivot]);
                break;
            }
        }

        reverse(nums.begin() + pivot + 1 , nums.end());



    }
};