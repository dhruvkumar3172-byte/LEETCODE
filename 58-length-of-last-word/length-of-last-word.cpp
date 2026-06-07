class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int count = 0;
        reverse(s.begin() , s.end());
        for(int i = 0; i < n; i++){
           if(s[i] >= 'a' && s[i] <='z'){
            count++;
           }
           else if(s[i] >= 'A' && s[i] <= 'Z'){
            count++;
           }
           else if(s[i] == ' ' && count >  0){
            i = n;
           }

        }
        return count;
        
    }
};