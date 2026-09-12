class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map <int,int> mpp;
        int ans=0;

        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }

        for(auto it:mpp){
            if(it.second==3){
                vector<int> temp;
                for(int i=0;i<nums.size();i++){
                    if(it.first==nums[i]){
                        temp.push_back(i);
                    }
                }
                if(temp.size()==3 &&(temp[1]-temp[0]==temp[2]-temp[1])){
                    ans++;
                }
            }
        }
        return ans;
    }
};