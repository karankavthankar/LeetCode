class Solution {
public:
    
    int countPrimes(int n) {
        if(n<=2){
            return 0;
        }
        
        int count=0;
        vector<int> arr(n,1);
        arr[0]=0;
        arr[1]=0;

        for(int i=2;i*i<n;i++){
            if(arr[i]==1){
                for(int j=i*i;j<n;j+=i){
                    arr[j]=0;
                }
            }
        }

        for(int i=0;i<arr.size();i++){
            if(arr[i]==1){
                count++;
            }
        }
        return count;
    }
};