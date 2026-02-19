class Solution {
public:
    bool isPalindrome(int x) {

        if(x < 0 || x % 10 == 0 && x != 0){
            return false;
        }
        
        int halfreverse = 0;
        int num = 0;

        while (x > halfreverse){
            num = x % 10;
            halfreverse = halfreverse * 10 + num;
            x = x / 10;
        }

        if(x == halfreverse || x == halfreverse / 10){
            return true;
        }
        return false;
    }
};