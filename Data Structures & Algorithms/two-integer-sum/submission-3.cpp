class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]] = i;
        }
        for(int i = 0; i < nums.size(); i++){
            if(mp.find(target - nums[i])!= mp.end() && mp[target - nums[i]] != i){
                int a = i;
                int b = mp[target - nums[i]];

                if(a > b) return {b,a};
                return {a,b};
            }
        }
        return {};
    }
};