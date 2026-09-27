class Solution {
public:
    bool isPowerOfThree(int n) {
        if( n <= 0){
            return false;
        }
        int temp = n;
        while(temp > 1){
            if(temp % 3 == 0){
            temp = temp / 3;  
        } else{
            return false;
        }
        }

        if(temp == 1){
            return true;
        }
        return false;
    }
};