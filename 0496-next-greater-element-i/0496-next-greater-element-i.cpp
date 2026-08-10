class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector <int> ans(nums1.size(),-1);

        for(int i=0;i<nums1.size();i++){
            int j=0,target=nums1[i];

            for(j=0;j<nums2.size();j++){
                if(target==nums2[j]){
                    break;
                }
            }

            for(int k=j+1;k<nums2.size();k++){
                if(nums2[k]>target){
                    ans[i]=nums2[k];
                    break;
                }
            }
        }
        return ans;
    }
};