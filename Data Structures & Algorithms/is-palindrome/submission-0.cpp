class Solution {
public:
    bool isPalindrome(string s) {
        string t = "";
        
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] >= 65 && s[i] <= 92){
                s[i] = s[i] + 32;
            }
            if(!((s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57)) ) continue;
            else{
                t.push_back(s[i]);
            }
        }
        s = t;
        reverse(t.begin(),t.end());

        cout << t;
        return t == s;
    }
};
