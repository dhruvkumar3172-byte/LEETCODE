class Solution {
public:
    void reverseString(vector<char>& s) {
        // int count = 0;
        // for(int i = 0; s[i] != '\0'; i++){
        //     count++;
        // }
        // int len = count;

        int st = 0;
        int e = s.size()-1;

        while(st <= e){
            swap(s[st++], s[e--]);
        }
    
        
    }
};