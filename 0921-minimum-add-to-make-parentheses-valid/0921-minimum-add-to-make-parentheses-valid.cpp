class Solution {
public:
    int minAddToMakeValid(string s) {
        vector<char> arr;
        int closecnt=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                arr.push_back(s[i]);
            }else if(!arr.empty() && s[i]==')'){
                arr.pop_back();
            }else if(arr.empty() && s[i]==')'){
                closecnt++;
            }
        }

        return closecnt+arr.size();
    }
};