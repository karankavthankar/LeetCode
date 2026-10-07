class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left=1,right=nums.size()-2;

        if(nums.size()==1){
            return nums[0];
        }else if(nums[0]!=nums[1]){
            return nums[0];
        }else if(nums.back()!=nums[nums.size()-2]){
            return nums.back();
        }

        while(left<=right){
            int mid=left+(right-left)/2,compare=0;

            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
                return nums[mid];
            }

            if(nums[mid-1]==nums[mid]){
                compare=mid-1;
            }else{
                compare=mid;
            }

            if(compare%2!=0){
                right=mid-1;
            }else{
                left=mid+1;
            }

        }
        return 0;
    }
};