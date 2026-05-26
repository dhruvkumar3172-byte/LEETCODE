class Solution {
public:

   

    int gcdOfOddEvenSums(int n) {


        int even = n*(n + 1);
        int odd =n * n;

        while(odd != 0){
            int temp = odd;
            odd = even % odd;
            even = temp;

        }

       
        return even;

        //  return __gcd(odd, even);
        
    }
};