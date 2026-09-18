class Solution {
public:
    string decodeString(string s) {
        stack<char> st;

        for(char ch : s){
            if(ch!=']'){
                st.push(ch);
            }else{
                string str="",number="",repeated="";
                while(!st.empty() && st.top()!='['){
                    str=st.top()+str;
                    st.pop();
                }
                st.pop();
                while(!st.empty() && isdigit(st.top())){
                    number=st.top()+number;
                    st.pop();
                }
                int repeat=stoi(number);
                for(int i=0;i<repeat;i++){
                    repeated+=str;
                }
                for(char ch :repeated){
                    st.push(ch);
                }
            }
        }
        string result="";
        while(!st.empty()){
            result=st.top()+result;
            st.pop();
        }
        return result;
    }
};