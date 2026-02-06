class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
     int xorall = 0;
     for(int x : nums){
        xorall = x^xorall;
     }

     int g1 = 0, g2 = 0;
     
   long long bitdif = xorall & -(long long)xorall;

     for(int y : nums){
       
       if(bitdif & y){

        g1 = g1^y;

     }
     else{
        g2 = g2^y;
     }
     }
     vector<int>ans;
     ans.push_back(g1);
     ans.push_back(g2);

     return ans;
    }
};