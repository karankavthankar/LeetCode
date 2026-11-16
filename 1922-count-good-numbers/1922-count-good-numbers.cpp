long long m=1e9+7;

class Solution {
public:

    long long power(long long base,long long exp){
        if(exp==0){
            return 1;
        }
        
        long long half=power(base,exp/2);
        long long res=(half*half)%m;

        if(1&exp){
            res=(res*base)%m;
        }
        return res;
    }

    int countGoodNumbers(long long n) {
        long long ans1=0,ans2=0;
        if(n&1){
            ans1=power(5,(n+1)/2)%m;
        }else{
            ans1=power(5,n/2)%m;
        }
        ans2=power(4,n/2)%m;
        
        long long fans=(ans1*ans2)%m;
        return (int)fans;
    }
};