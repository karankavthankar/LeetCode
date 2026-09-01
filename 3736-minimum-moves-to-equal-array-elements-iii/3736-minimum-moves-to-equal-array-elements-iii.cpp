class Solution {
public:
    int minMoves(vector<int>& nums) {
        int big=nums[0],cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>big){
                big=nums[i];
            }
        }

        for(int i=0;i<nums.size();i++){
            cnt+=big-nums[i];
        }
        return cnt;
    }
};