class Solution {
public:
    // sliding window
    int maxProfit(vector<int>& prices) {
        int ans =0;
        int mnValue = INT_MAX;
        for(int i=0;i<prices.size();i++){
            mnValue = min(mnValue,prices[i]);
            ans = max(ans,prices[i]-mnValue);
        }
        return ans;
    }
};
