class Solution {
public:
    long long removeZeros(long long n) {
        string s=to_string(n);
        int j=0;

        for(int i=0;i<s.size();i++){
            if(s[i]!='0'){
                s[j++]=s[i];
            }
        }

        s.resize(j);
        return stol(s);
    }
};