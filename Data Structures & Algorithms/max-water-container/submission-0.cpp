class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = 0;

        int n = heights.size();
        int l = 0;
        int r = n-1;

        while(l <= r){
            int maxi = 0;
            int lh = heights[l];
            int rh = heights[r];

            maxi = min(lh,rh) * (r-l);
            if(lh < rh){
                l++;
            }
            else r--;
            ans = max(ans,maxi);
        }
        return ans;
    }
};
