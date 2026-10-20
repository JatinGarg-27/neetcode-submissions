class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>result;
        sort(nums.begin(),nums.end());
        int n = nums.size();

        for(int i = 0; i < n ; i++){
            int x = nums[i] ;
            int l = i+1;
            int r = n-1;

            if(i > 0 && nums[i] == nums[i-1]) continue;

            while(l < r){
                if(nums[l] + nums[r] + x == 0) {
                    result.push_back({x,nums[l],nums[r]});
                    l++;
                    r--;
                }
                else if(x + nums[l] + nums[r] > 0 ) r--;
                else l++;
            }

        }
        set<vector<int>>st;
        for(auto i : result){
            st.insert(i);
        }
        result = {};
        for(auto i : st){
            result.push_back(i);
        }
        return result;
    }
};
