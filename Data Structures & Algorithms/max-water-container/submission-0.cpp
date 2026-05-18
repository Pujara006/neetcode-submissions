class Solution {
public:
    int maxArea(vector<int>& heights) {
        int noOfBars = heights.size();
        int lo = 0,hi = noOfBars-1;
        int maximumArea = 0;
        while(lo<hi){
            maximumArea = max(maximumArea,min(heights[lo],heights[hi])*(hi-lo));
            if(heights[lo]>heights[hi]) hi--;
            else lo++;
        }
        return maximumArea;
    }
};
