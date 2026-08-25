class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int> ans;
        int check=k;

        for(int i=0;i<nums.size();i++){
            if(nums[i]%k==0){
                ans.insert(nums[i]);
            }
        }

        for(auto x:ans){
            if(check==x){
                check+=k;
                continue;
            }
            return check;
        }

        return check;
    }
};