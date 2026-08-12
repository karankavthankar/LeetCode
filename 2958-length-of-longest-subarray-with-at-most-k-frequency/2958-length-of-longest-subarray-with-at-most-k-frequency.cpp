class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        int j=0,maxLen=0;

        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;

            if(mpp[nums[i]]>k){
                maxLen=max(i-j,maxLen);
                while(j<nums.size() && mpp[nums[i]]>k){
                    mpp[nums[j++]]--;
                }
            }

            if(i==nums.size()-1){
                maxLen=max(i-j+1,maxLen);
            }
        }

        if(maxLen==0){
            return nums.size();
        }
        return maxLen;
    }
};