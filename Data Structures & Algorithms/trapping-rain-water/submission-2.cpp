class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int ans =0;
        int lo = 0,hi = n-1;
        int lvalue = 0,rvalue = 0;
        while(lo<hi){
            lvalue = max(lvalue,height[lo]);
            rvalue = max(rvalue,height[hi]);
            if(rvalue<lvalue){
                ans += max(0,rvalue - height[hi]);
                hi--;
            }
            else{
                ans += max(0,lvalue-height[lo]);
                lo++;
            }
        }
        return ans;
    }
};
