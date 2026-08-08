class Solution {
public:
    int minLength(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            if(!ans.empty() && ((string(1,ans.back())+s[i])=="AB" || (string(1,ans.back())+s[i])=="CD")){
                ans.pop_back();
            }else{
                ans.push_back(s[i]);
            }
        }

        return ans.size();
    }
};