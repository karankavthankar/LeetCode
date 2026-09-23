class Solution {
public:
    long long sumAndMultiply(int n) {
        long long ans=0;
        int sum=0;
        vector<int> digits;

        while(n>0){
            int digit=n%10;
            if(digit!=0){
                digits.push_back(digit);
            }
            n/=10;
        }

        reverse(digits.begin(),digits.end());

        for(int i=0;i<digits.size();i++){
            sum+=digits[i];
            ans=ans*10+digits[i];
        }

        return ans*sum;
    }
};