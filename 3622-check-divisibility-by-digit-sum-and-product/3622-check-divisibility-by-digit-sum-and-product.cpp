class Solution {
public:
    bool checkDivisibility(int n) {
        int k=n,mul=1,add=0,finalSum=0;

        while(k>0){
            int digit=k%10;
            mul*=digit;
            add+=digit;
            k/=10;
        }

        finalSum=mul+add;

        if(n%finalSum==0){
            return true;
        }

        return false;
    }
};