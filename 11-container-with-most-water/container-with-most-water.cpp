class Solution {
public:
    int maxArea(vector<int>& height) {
        int right = height.size()-1;
        int left = 0;
        
        int maxwater = 0;

       while(left < right){
        int width = right - left;
        int h = min(height[left], height[right]);
        int area = width * h;

        maxwater = max(maxwater, area);
        if(height[left] > height[right]){
            right--;
        }
        else{
            left++;
        }

       }

       return maxwater;

    }
};
