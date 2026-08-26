class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int left=0,onecount=0;
        string ans="";

        for(int right=0;right<s.size();right++){
            if(s[right]=='1'){
                onecount++;
            }

            while(onecount>=k){
                if(onecount==k){
                    string currentAns=s.substr(left,right-left+1);

                    if(ans.size()==0 || currentAns.size()<ans.size() || (currentAns.size()==ans.size() && currentAns<ans)){
                        ans=currentAns;
                    }
                }

                if(s[left]=='1'){
                    onecount--;
                }
                left++;
            }
        }
        return ans;
    }
};