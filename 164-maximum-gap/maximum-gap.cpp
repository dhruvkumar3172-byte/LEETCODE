class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int ans = -1;
        int maxgap = -1;
        if(n < 2){
            return 0;
        }
        for(int i = 0; i < n; i++){
            if(i+1 != n){
            ans = nums[i+1] - nums[i];
             maxgap = max(ans, maxgap);
            }

        }
       

        return  maxgap;
    }
};