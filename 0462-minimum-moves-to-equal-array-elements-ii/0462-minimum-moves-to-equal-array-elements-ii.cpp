class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int mid=nums.size()/2,add=0;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++){
            add+=abs(nums[i]-nums[mid]);
        }
        return add;
    }
};