class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<bool> visited(26,false);
        vector<int> lastindex(26);
        string ans="";

        for(int i=0;i<s.size();i++){
            lastindex[s[i]-'a']=i;
        }

        for(int i=0;i<s.size();i++){
            if(visited[s[i]-'a']){
                continue;
            }

            while(!ans.empty() && ans.back()>s[i] && lastindex[ans.back()-'a']>i){
                visited[ans.back()-'a']=false;
                ans.pop_back();
            }

            visited[s[i]-'a']=true;
            ans.push_back(s[i]);
        }
        return ans;
    }
};