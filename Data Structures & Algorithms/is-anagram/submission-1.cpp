class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<char,int>mps;
       for(auto i : s) mps[i]++;
       unordered_map<char,int>mpp;
       for(auto i : t) mpp[i]++;

       for(char c = 'a' ; c<= 'z' ; c++){
        if(mps[c]!= mpp[c]) return false;
       }

       return true;
    }
};
