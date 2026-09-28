class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        string s="";

        for(int i=0;i<nums.size();i++){
            s+=to_string(nums[i]);
        }

        char dig=digit+'0';
        int count=0;

        for(int i=0;i<s.size();i++){
            if(s[i]==dig){
                count++;
            }
        }
        return count;
    }
};