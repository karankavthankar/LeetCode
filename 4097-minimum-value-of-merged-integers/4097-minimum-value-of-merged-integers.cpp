class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int small=0;
        vector<int> arr;
        for(int i=0;i<nums.size();i+=2){
            string s="";
            s+=to_string(nums[i])+to_string(nums[i+1]);
            arr.push_back(stoi(s));
        }
        small=arr[0];
        for(int i=0;i<arr.size();i++){
            if(arr[i]<small){
                small=arr[i];
            }
        }
        return small;
    }
};