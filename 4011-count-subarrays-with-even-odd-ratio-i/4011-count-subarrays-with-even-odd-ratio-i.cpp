class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            int evenCnt=0,oddCnt=0;
            for(int j=i;j<nums.size();j++){
                if(nums[j]%2==0){
                    evenCnt++;
                }else{
                    oddCnt++;
                }
                if(oddCnt==0){
                    continue;
                }
                float ratio=(float)evenCnt/oddCnt,check=(float)a/b;

                if(ratio<=check && oddCnt>0){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};