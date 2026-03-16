class Solution {
public:
    int minOperations(string s) {
        int n = s.length();
        int count0 = 0;
        int count1 = 0;

        for(int i = 0; i < n; i++){
            if(s[i] != (i % 2) + '0'){
                count0++;
            }
            if(s[i] != ((i + 1) % 2 + '0')){
                count1++;
            }
        }

        return min(count0 , count1);
        
    }
};

