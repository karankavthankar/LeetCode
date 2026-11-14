class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int minsum=INT_MAX;

        for(int i=0;i<nums.size();i++){
            int checksum=0;
            for(int j=i;j<nums.size();j++){
                checksum+=nums[j];
                if(j-i+1>=l && j-i+1<=r){
                    if(checksum>0){
                        minsum=min(minsum,checksum);
                    }
                }
            }
        }
        if(minsum==INT_MAX){
            return -1;
        }
        return minsum;
    }
};