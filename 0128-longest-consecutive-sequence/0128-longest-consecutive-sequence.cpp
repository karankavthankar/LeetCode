class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        if(nums.size()==0){
            return 0;
        }else if(nums.size()==1){
            return 1;
        }

        int lastele=nums[0],maxseq=1,currseq=1;
        for(int i=1;i<nums.size();i++){
            if(lastele==nums[i]){
                continue;
            }

            if(nums[i]!=lastele && nums[i]-1==lastele){
                currseq++;
                lastele=nums[i];
                maxseq=max(maxseq,currseq);
                continue;
            }

            lastele=nums[i];
            maxseq=max(maxseq,currseq);
            currseq=1;
        }

        return maxseq;
    }
};