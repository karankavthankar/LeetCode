class Solution {
public:
    bool detectCapitalUse(string word) {
        bool ans=false;
        int allCap=0,allSma=0;

        for(int i=0;i<word.size();i++){
            if(word[i]>='A' && word[i]<='Z'){
                allCap++;
            }
            if(word[i]>='a' && word[i]<='z'){
                allSma++;
            }
        }

        if(allCap==word.size()){
            ans=true;
        }
        if(allSma==word.size()){
            ans=true;
        }
        if((word[0]>='A' && word[0]<='Z') && allSma==word.size()-1){
            ans=true;
        }

        return ans;
    }
};