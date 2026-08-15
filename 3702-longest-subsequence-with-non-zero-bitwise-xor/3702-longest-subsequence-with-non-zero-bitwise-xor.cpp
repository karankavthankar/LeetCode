class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xr=0,isNonZero=false;

        for(auto &it:nums){
            xr^=it;
            if(it!=0){
                isNonZero=true;
            }
        }

        if(xr>0) return nums.size();
        if(isNonZero) return nums.size()-1;

        return 0;
    }
};