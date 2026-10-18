class Solution {
public:
    bool isAnagram(string s, string t) {
       
        unordered_map<char,int>mp;

        for(auto i : s) mp[i]++;

        for(auto i : t) mp[i]--;

        for(char c = 'a' ; c <= 'z' ; c++){
            if(mp[c] != 0 ) return false;
        }

        return true;
    }
};
