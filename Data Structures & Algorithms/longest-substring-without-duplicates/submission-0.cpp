class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int l = 0;
        int r = 0;
        int n = s.size();

        int ans = 0;
        while(r < n){
            
            if(mp[s[r]] == 0){
                mp[s[r]]++;
                r++;
            }

            else{
                while(mp[s[r]] != 0){
                    mp[s[l]]--;
                    l++;
                }
                mp[s[r]]++;
                r++;
            }

            int maxi = r-l;
            ans = max(maxi,ans);
        }

        return ans ;
    }
};
