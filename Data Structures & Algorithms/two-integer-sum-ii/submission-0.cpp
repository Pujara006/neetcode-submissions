class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans(2);
        int numSize = numbers.size();
        int lo = 0,hi = numSize -1;
        while(lo<hi){
            int sum = numbers[lo]+numbers[hi];
            if( sum == target){
                ans[0] = lo+1;
                ans[1] = hi+1;
                break;
            }
            else if(sum>target) hi--;
            else lo++;
        }
        return ans;
    }
};
