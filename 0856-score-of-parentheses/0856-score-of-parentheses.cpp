class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;

        st.push(0);

        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(0);
            }

            if(s[i]==')'){
                int val=st.top();
                st.pop();
                int score=max(2*val,1);
                int preval=st.top();
                st.pop();

                st.push(preval+score);
            }
        }
        return st.top();
    }
};