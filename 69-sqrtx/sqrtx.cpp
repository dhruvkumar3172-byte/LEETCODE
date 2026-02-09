class Solution {
public:
    int mySqrt(int x) {
        int start = 0;
        int end =x;
        int ans = -1;

        while(start <= end){
            long long mid = start + (end - start)/2;
            long long sqmid = mid*mid;

            if(sqmid == x){
                return mid;
            }
            if(sqmid > x){
                
                end = mid -1;
            }
            if(sqmid < x){
                ans = mid;
                start = mid + 1;
            }
        }
        return ans;
    }
};