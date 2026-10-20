class Solution {
public:
    // need to make the string in sorted way

    string solve(string s){
        unordered_map<char,int>mp;
        for(auto i : s) mp[i]++;

        string ans = "";
        for(char c = 'a' ; c<= 'z' ; c++) {
            while(mp[c]!= 0) {
                ans.push_back(c);
                mp[c]--;
            }
        }

        return ans;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string,vector<string>>mp;
        for(auto i : strs){
            string isSame = solve(i);

            mp[isSame].push_back(i);
        }

        for(auto i : mp) result.push_back(i.second);
        return result;
    }
};
