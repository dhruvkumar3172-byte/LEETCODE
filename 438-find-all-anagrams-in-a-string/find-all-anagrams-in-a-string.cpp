class Solution {
public:

    bool isEqual(int a[], int b[]){
    for(int i = 0; i < 26; i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}
    vector<int> findAnagrams(string s, string p) {
        int pCount[26] = {0};
        int sCount[26] = {0};
        int m = p.length();
        int n = s.length();

        vector<int>ans;

        for(char ch : p){
            pCount[ch - 'a']++;
        }

        for(int i = 0; i < n; i++){
            sCount[s[i] - 'a']++;

            if(i >= m){
                sCount[s[i - m] - 'a' ]--;
            }

            if( i >= m-1 && isEqual(pCount, sCount)){
                ans.push_back(i - m + 1);
            }
            
        }

        return ans;

    }
};