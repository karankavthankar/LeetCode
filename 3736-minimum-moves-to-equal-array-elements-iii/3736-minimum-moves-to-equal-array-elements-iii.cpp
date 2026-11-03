class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minmove=0;
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){
            minmove+=nums.back()-nums[i];
        }
        return minmove;
    }
};