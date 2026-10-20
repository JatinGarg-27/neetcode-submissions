class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;

        for(int i = 0 ; i < nums.size() ; i++){
            if(mp.find(target-nums[i])!= mp.end()) {
                int a = mp[target - nums[i]];
                int b = i;

                if(a > b) return {b,a};
                return {a,b};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};
