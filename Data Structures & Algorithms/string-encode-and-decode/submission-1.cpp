class Solution {
public:
    
    string encode(vector<string>& strs) {
        string ans = "";
        for(int i = 0; i < strs.size(); i++){
            ans = ans+ strs[i] + "`";
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        string p = "";
        for(auto i : s){
            if(i == '`') {
                ans.push_back(p);
                p = "";
            }
            else {
                p.push_back(i);
            }
        }
        return ans;
    }
};
