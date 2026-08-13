class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack <int> st;
        unordered_map <int,int> mpp;
        vector<int> ans;

        for(int i=0;i<nums2.size();i++){
            
            while(!st.empty() && st.top()<nums2[i]){
                mpp[st.top()]=nums2[i];
                st.pop();
            }

            st.push(nums2[i]);
        }

        while(!st.empty()){
            mpp[st.top()]=-1;
            st.pop();
        }

        for(auto &it:nums1){
            ans.push_back(mpp[it]);
        }

        return ans;
    }
};