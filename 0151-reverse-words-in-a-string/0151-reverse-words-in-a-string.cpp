class Solution {
public:
    string reverseWords(string s) {
        vector <string> arr;
        string add="",ans="";
        s+=' ';

        for(int i=0;i<s.size();i++){
            if(!add.empty() && s[i]==' '){
                arr.push_back(add);
                add="";
                continue;
            }else if(add.empty() && s[i]==' '){
                continue;
            }
            add+=s[i];
        }
        
        for(int i=arr.size()-1;i>=1;i--){
            ans+=arr[i]+' ';
        }
        ans+=arr[0];

        return ans;
    }
};