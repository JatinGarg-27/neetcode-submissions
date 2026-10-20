class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i : nums){
            mp[i]++;
        }

        int ans = 0; 
        
        for(int i = 0 ; i < nums.size() ; i++ ){
            int x = nums[i] ;
            if(mp[x-1] == 0){
                int maxi = 1;
                while(mp[x+1]!= 0){
                    maxi++;
                    x++;
                }
                ans = max(maxi,ans);
            }
        }
        return ans;
    }
};
