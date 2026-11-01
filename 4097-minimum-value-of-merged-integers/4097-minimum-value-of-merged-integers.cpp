class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int small=INT_MAX;

        for(int i=0;i<nums.size();i+=2){
            int power=0;

            if(nums[i+1]<10){
                power=10;
            }else if(nums[i+1]<100){
                power=100;
            }else if(nums[i+1]<1000){
                power=1000;
            }else if(nums[i+1]<10000){
                power=10000;
            }
            small=min(nums[i]*power+nums[i+1],small);
        }
        return small;
    }
};