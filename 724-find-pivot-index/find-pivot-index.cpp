class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int rightsum =0;
        int leftsum = 0;

        for(int i = 0; i < nums.size(); i++){
            rightsum = rightsum + nums[i];
        }

        for(int i = 0; i < nums.size(); i++){
            int val = nums[i];
            rightsum = rightsum - val;

            if(leftsum == rightsum){
                return i;
            }

            leftsum = leftsum + val;
            
        }
        return -1;
    }
};