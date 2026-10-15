class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int ,int>> arr;
        unordered_map<int,int> mpp;
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }

        for(auto it :mpp){
            arr.push_back({it.second,it.first});
        }

        sort(arr.begin(),arr.end());

        for(int i=arr.size()-1;i>=0;i--){
            if(k==0){
                break;
            }
            ans.push_back(arr[i].second);
            k--;
        }
        return ans;
    }
};