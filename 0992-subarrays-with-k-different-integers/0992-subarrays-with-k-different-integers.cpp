class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmostsub(nums,k) - atmostsub(nums,k-1);
    }

    int atmostsub(vector<int>& nums, int k){
        if(k<=0){
            return 0;
        }

        int left=0,count=0;
        unordered_map<int,int> frq;

        for(int right=0;right<nums.size();right++){
            frq[nums[right]]++;

            while(frq.size()>k){
                frq[nums[left]]--;
                if(frq[nums[left]]==0){
                    frq.erase(nums[left]);
                }
                left++;
            }

            count+=right-left+1;
        }
        return count;
    }
};