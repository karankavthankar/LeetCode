class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans="";
        stack<int> st;

        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(i);
            }else if(s[i]==')'){
                if(!st.empty()){
                    st.pop();
                }else{
                    s[i]='#';
                }
            }
        }

        while(!st.empty()){
            s[st.top()]='#';
            st.pop();
        }

        for(int i=0;i<s.size();i++){
            if(s[i]=='#'){
                continue;
            }
            ans.push_back(s[i]);
        }
        return ans;
    }
};