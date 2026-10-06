class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // as the constraint is upto 10^4 that means i can go upto o(n^2) time complexity

        // if it is anagrams means if i sort them out they should be same if they are anagrams
        // we can use that particular thing here
        vector<vector<string>>result;
        unordered_map<string,vector<string>>mp;
        for(auto i : strs){
            string copy = i;
            sort(copy.begin(),copy.end());
            mp[copy].push_back(i);
        }
        //till now basically how my unordered_map has value this is same as result that i want it to be in vector form 
        // now the question arises that i should take it out in vector form
        
        // also we can use set to have the unique elements
        for(auto it : mp){
            result.push_back(it.second);
        }
        return result;
    }
};
