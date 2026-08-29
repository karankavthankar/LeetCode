class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map<int,int> mpp;
        int k=n,num=INT_MAX,freq=INT_MAX;

        while(k>0){
            int digit=k%10;
            mpp[digit]++;
            k/=10;
        }

        for(auto it : mpp){
            if(it.second<freq){
                num=it.first;
                freq=it.second;
            }

            if(it.second==freq && it.first<num){
                num=it.first;
                freq=it.second;
            }
        }

        return num;
    }
};