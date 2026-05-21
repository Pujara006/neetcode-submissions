class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> mp;
        int ans =0,lo =0;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()) lo = max(lo,mp[s[i]]+1);
            ans = max(ans,i-lo+1);
            mp[s[i]] = i;
            // cout<<s[i]<<lo<<" "<<ans<<endl;
        }
        return ans;
    }
};
