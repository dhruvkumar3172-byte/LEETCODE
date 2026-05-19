class Solution {
public:
    int countPrimes(int n) {
        vector<bool>isPrime(n+1 , true);
        isPrime[0] = isPrime[1] = false;
      

        for(long long i = 2 ; i*i < n; i++){
            if(isPrime[i]){
                for(long long j =  i*i; j < n; j = j+i){
                    isPrime[j] = false;

                }

            }
        }
        int count = 0;
        for(int i = 2; i < n ; i++){
            if(isPrime[i]){
                count++;
            }
        }
        return count;
        
    }
};