class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        vector<int> ans={-1,-1};
        int product=1;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i] > nums[j] && nums[i] + nums[j] == target){
                    if(product==1 || nums[i] * nums[j]>product){
                        product=nums[i] * nums[j];
                        ans={i,j};
                    }
                }
            }
        }
        return ans;
    }
};