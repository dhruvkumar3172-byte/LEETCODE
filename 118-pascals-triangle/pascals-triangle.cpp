class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int i = 0;
        vector<vector<int>>ans;
        while(i < numRows ){
            vector<int>row;
            int value = 1;
            int j = 0;

            while(j <= i){
               row.push_back(value);
                value = value *(i - j) / (j + 1);
                j++;
            }

           ans.push_back(row);
            i++;

        }
        return ans;

            }
};