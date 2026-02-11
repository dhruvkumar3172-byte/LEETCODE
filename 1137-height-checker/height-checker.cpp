class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        vector<int>v (heights);
        for(int i = 0; i < n-1; i++){

            int minIndex = i;
            
            for(int j = i+1; j < n; j++){

                
                if(heights[j] < heights[minIndex]){
                    minIndex = j;
                }

            }
            swap(heights[i], heights[minIndex]);
        }
        int count = 0;
        for(int i = 0; i < n; i++){

            if(heights[i] != v[i]){
                count++;
            }

        }
        return count;

    }
};