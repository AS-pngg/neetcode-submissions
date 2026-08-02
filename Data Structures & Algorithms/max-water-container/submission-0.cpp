class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res=0;
        int l = 0, r = heights.size()-1;
        while(l<r){
            int max = min(heights[l],heights[r]) * (r-l);
            if(max > res){
                res = max;
            }
            if(heights[l] <= heights[r] ){
                l++;
            }else{
                r--;
            }
        }
        return res;
    }
};
