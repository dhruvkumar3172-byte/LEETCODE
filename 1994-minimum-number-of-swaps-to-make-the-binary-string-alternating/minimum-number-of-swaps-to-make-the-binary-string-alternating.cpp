class Solution {
public:
    int minSwaps(string s) {
        int count0 = 0;
        int count1 = 0;
        int n = s.length();

        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                count0++;
            }
            else{
                count1++;
            }
        }
        
        if(abs(count1 - count0) > 1){
            return -1;
        }

        
        int mismatchSt0 = 0;
        int mismatchSt1 = 0;

        for(int i = 0; i < n; i++){
            if(s[i] != (i % 2) + '0'){
                mismatchSt0++;
            }
            if(s[i] != ((i+1) % 2 + '0')){
                mismatchSt1++;
            }
        }

        if(count1 > count0){
            return mismatchSt1 / 2;

        }
        if(count0 > count1){
            return mismatchSt0 / 2;
        }
        
            return min(mismatchSt0 , mismatchSt1) / 2;
        

        
    }
};