class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.length();
        int n2 = s2.length();

        if(n1 > n2){
            return false;
        }

        int arr1[26] = {0};
        int arr2[26] = {0};

        for (char ch : s1) {
            arr1[ch - 'a']++;
        }
        for(int i = 0; i < n2; i++){
           arr2[s2[i] - 'a']++;
            

            if(i >= n1){
                arr2[s2[i - n1] - 'a' ] --;
            }

            if(equal(begin(arr1), end(arr1), begin(arr2))){
                return true;
            }
        }
    

        return false;


        
    }
};