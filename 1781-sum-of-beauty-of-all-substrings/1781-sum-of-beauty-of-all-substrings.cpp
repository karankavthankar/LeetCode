class Solution {
public:
    int beautySum(string s) {
        int ans=0;

        for(int i=0;i<s.size();i++){

            unordered_map<char,int> mpp;
            for(int j=i;j<s.size();j++){
                int fmin=1000,fmax=0;

                mpp[s[j]]++;

                for(auto it:mpp){
                    fmin=min(fmin,it.second);
                    fmax=max(fmax,it.second);
                }
                ans+=fmax-fmin;
            }
        }

        return ans;
    }
};