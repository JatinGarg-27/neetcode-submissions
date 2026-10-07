class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // the first thought that come into my mind here is just going on with sort and go find the consecutive one but that will cost me nlogn to avoid this i can use one approach like find the maximum element in array and then iterate through that find consecutive with bigof 1 space complexity but the thing is that i need to find the minimum element and here it can be around 2*10^9 and will cause the tle


        // i can use hashmap also and iterate it in array then can check is + of that element exist or not 
        unordered_map<int,int>mp;
        for(auto i : nums) mp[i]++;
        if(nums.size() == 0) return 0;
        int ans = 1;
        
        for(int i = 0; i < nums.size(); i++) {
            // Only start counting if it's the beginning of a sequence
            if(mp[nums[i] - 1] == 0) {
                int maxi = 1;
                int x = nums[i] + 1;
                
                while(mp[x] != 0) {
                    maxi++;
                    x++;
                }
                
                ans = max(ans, maxi);
            }
        }
        
        return ans;
    }
};
