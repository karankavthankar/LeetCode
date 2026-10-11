class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int j=numbers.size()-1,i=0;

        while(i<j){
            if(numbers[i]+numbers[j]==target){
                return {min(i,j)+1,max(i,j)+1};
            }else if(numbers[i]+numbers[j]>target){
                j--;
            }else if(numbers[i]+numbers[j]<target){
                i++;
            }
        }

        return {0,0};
    }
};