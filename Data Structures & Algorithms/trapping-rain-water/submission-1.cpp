class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int ans =0;
        vector<int> prefixSum(n,0);
        //forward pass
        for(int i=0;i<n;i++){
            if(i>0) prefixSum[i] = max(prefixSum[i-1],height[i]);
            else prefixSum[i] = height[i];
        }
        //backward pass
        int maxValue = 0;
        for(int i=n-1;i>=0;i--){
            maxValue = max(height[i],maxValue);
            prefixSum[i] = min(prefixSum[i],maxValue);
        }
        for(int i=0;i<n;i++) ans += prefixSum[i]-height[i];
        return ans;
    }
};
