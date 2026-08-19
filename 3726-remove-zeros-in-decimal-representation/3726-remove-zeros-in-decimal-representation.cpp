class Solution {
public:
    long long removeZeros(long long n) {
        long long ans=0;
        vector<int> arr;
        while(n>0){
            int digit=n%10;
            if(digit==0){
                n/=10;
                continue;
            }
            arr.push_back(digit);
            n/=10;
        }
        ans=arr[arr.size()-1];

        if(arr.size()==1){
            return ans;
        }

        for(int i=arr.size()-2;i>=0;i--){
            ans=ans*10+arr[i];
        }
        return ans;
    }
};