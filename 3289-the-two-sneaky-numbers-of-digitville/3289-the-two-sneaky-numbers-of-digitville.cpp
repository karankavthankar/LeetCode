class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(i!=j && nums[i]==nums[j]){
                    ans.push_back(nums[i]);
                }
                if(nums.size()==2){
                    return ans;
                }
            }
        }
    return ans;
    }
};