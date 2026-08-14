class Solution {
public:
    int maximumLengthSubstring(string s) {
        int j=0,ans=0;
        unordered_map<char,int> mpp;

        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
            
            if(mpp[s[i]]>2){
                ans=max(i-j,ans);
            }

            while(j<s.size() && mpp[s[i]]>2){
                mpp[s[j++]]--;
            }

            if(i==s.size()-1){
                ans=max(i-j+1,ans);
            }
        }

        return ans;
    }
};