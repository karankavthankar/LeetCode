class Solution {
public:
    string reversePrefix(string word, char ch) {
        int l=0,r=0,found=0;

        for(r=0;r<word.size();r++){
            if(word[r]==ch){
                found=1;
                break;
            }
        }

        if(found==0){
            return word;
        }

        while(l<=r){
            swap(word[l],word[r]);
            l++;
            r--;
        }
        return word;
    }
};