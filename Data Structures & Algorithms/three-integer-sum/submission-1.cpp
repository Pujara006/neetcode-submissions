class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> triplets;
        sort(nums.begin(),nums.end());
        int numSize = nums.size();
        for(int lo=0;lo<(numSize-2);lo++){
            if(lo>0&&(nums[lo] == nums[lo-1])) continue;
            int mid = lo+1,hi = numSize-1;
            while(mid<hi){
                if(mid>lo+1&&(nums[mid]==nums[mid-1])){
                    mid++;
                    continue;
                }
                int sum = nums[mid]+nums[hi];
                if(nums[lo]*(-1)==sum){
                    triplets.push_back({nums[lo],nums[mid],nums[hi]});
                    mid++;
                    hi--;
                }
                else if(nums[lo]*(-1)<sum) hi--;
                else mid++;
            }
        }
        return triplets;
    }
};
