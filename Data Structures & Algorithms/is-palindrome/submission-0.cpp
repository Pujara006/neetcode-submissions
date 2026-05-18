class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int lo = 0,hi = n-1;
        while (lo < hi) {
            while (lo < hi && !isalnum(s[lo])) {
                lo++;
            }
            while (lo < hi && !isalnum(s[hi])) {
                hi--;
            }
            if (tolower(s[lo]) != tolower(s[hi])) {
                return false;
            }
            
            lo++;
            hi--;
        }
        return true;
    }
};
