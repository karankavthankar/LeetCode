class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map <int,int> mpp;
        int cnt=0;

        mpp[nums[0]]=1;

        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                mpp[nums[i]]++;
            }
        }

        for(auto it :mpp){
            if(it.second==1){
                cnt++;
            }
        }
        return cnt;
    }
};