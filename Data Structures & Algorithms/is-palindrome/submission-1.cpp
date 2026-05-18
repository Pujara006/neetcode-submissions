class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int lo = 0,hi = n-1;
        while(lo<hi){
            if(s[lo]>='A' && s[lo]<='Z') s[lo] = tolower(s[lo]);
            if(s[hi]>='A' && s[hi]<='Z') s[hi] = tolower(s[hi]);
            if(!(s[lo]>='a' && s[lo]<='z')&&!(s[lo]>='0' && s[lo]<='9')) lo++;
            else if(!(s[hi]>='a' && s[hi]<='z')&&!(s[hi]>='0' && s[hi]<='9')) hi--;
            else if(s[lo]!=s[hi]) return false;
            else{
                lo++;
                hi--;
            }
        }
        return true;
    }
};
