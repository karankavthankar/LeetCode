class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minpos=0,maxpos=0,front=0,back=0,both=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]<nums[minpos]){
                minpos=i;
            }
            if(nums[i]>nums[maxpos]){
                maxpos=i;
            }
        }
        
        front=max(minpos,maxpos)+1;
        back=nums.size()-min(minpos,maxpos);
        both=(min(minpos,maxpos)+1)+(nums.size()-max(minpos,maxpos));
        return min({front,back,both});
    }
};