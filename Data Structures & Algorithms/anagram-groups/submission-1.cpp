class Solution {
public:

    string solve(string& word){
        int charhash[26] = {0};

        for(auto i : word){
            charhash[i-'a']++;
        }

        string ans = "";
        for(int i = 0; i < 26 ; i++){
            while(charhash[i]!= 0){
                ans.push_back(i+'a');
                charhash[i]--;
            }
        }
        return ans;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // the more optimised solution for this would be not using sorting instead using a 
        // 26 size vector for finding number of same characters

        unordered_map<string, vector<string>>mp;

        for(auto i :strs){
            string word = i;
            string new_word = solve(word);
            mp[new_word].push_back(word);

        }

        vector<vector<string>>result;
        for(auto it : mp){
            result.push_back(it.second);
        }
        return result;
    }
};
