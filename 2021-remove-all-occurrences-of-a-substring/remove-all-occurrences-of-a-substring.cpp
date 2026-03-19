class Solution {
public:
    string removeOccurrences(string s, string part) {
        int m = s.length();
        int n = part.length();

        while(m != 0 && s.find(part) < m ){
            s.erase(s.find(part), n);
        }
        return s;

        
    }
};