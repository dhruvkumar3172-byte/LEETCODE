class Solution {

    int Alphanumeric(char ch){
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')  || (ch >= '0' && ch <= '9') ) {
            return 1;
        }
        else{
            return 0;
        }
    }

    char lowercase(char ch){
        if( (ch >= 'a' && ch <= 'z')  || (ch >= '0' && ch <= '9') ){
            return ch;
        }
        else{
            return ((ch - 'A') + 'a');
        }
    }

    
public:
    bool isPalindrome(string s) {
        
        int n = s.length();
        string ans;

        // remove non - alphanumeric

        for (int i = 0; i < n; i++){

            if(Alphanumeric(s[i])){
                ans.push_back(s[i]);
            }

        }

        int anslength = ans.length();

        //  convert to lowercase & check palindrome

           int st = 0;
           int e = ans.length() - 1;

        while(st <= e) {
            if(lowercase(ans[st]) == lowercase(ans[e])){
                st++;
                e--;
            }
            else{
            return false;
            }
        }

        return true;


        
    }
};