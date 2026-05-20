class Solution {
public:
    vector<int> closestPrimes(int left, int right) {

        //  Create sieve
        vector<bool> isPrime(right + 1, true);

        isPrime[0] = false;
        if(right >= 1) isPrime[1] = false;

        // Sieve of Eratosthenes
        for(long long i = 2; i * i <= right; i++) {

            if(isPrime[i]) {

                for(long long j = i * i; j <= right; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        //Store primes in range
        vector<int> primes;
        for(int i = left; i <= right; i++) {
            if(isPrime[i]) {
                primes.push_back(i);
            }
        }
        // Check if enough primes exist
        if(primes.size() < 2) {
            return {-1, -1};
        }
        // Find closest pair
        int minDiff = INT_MAX;
        vector<int> ans;

        for(int i = 1; i < primes.size(); i++) {
            int diff = primes[i] - primes[i - 1];
            if(diff < minDiff) {
                minDiff = diff;
                ans = {primes[i - 1], primes[i]};
            }
        }

        return ans;
    }
};