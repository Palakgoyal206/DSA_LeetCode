class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int res = 0;
        
        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                st.push(s[i]);
            }
            
            else if(s[i] == ')'){
                st.pop();
            }
            
            res = max(res, (int)st.size());
            
        }
        return res;
    }
};