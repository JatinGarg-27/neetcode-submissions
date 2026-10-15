class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        if(s.size() % 2 != 0) return false;
        for(auto i : s){
            if( i == '(' || i == '[' || i == '{') st.push(i);

            else{
                
                char top = st.top();
                if(st.empty()) return false;
                if(top == '(' && i != ')') return false;
                if(top == '[' && i != ']') return false;
                if(top == '{' && i != '}') return false;

                st.pop();
            }
        }

        return st.empty();
    }
};
