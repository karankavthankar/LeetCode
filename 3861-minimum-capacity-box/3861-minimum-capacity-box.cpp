class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int maxi=-1,index=-1;
        for(int i=0;i<capacity.size();i++){
            if((maxi<0 && capacity[i]>=itemSize) || (capacity[i]>=itemSize && maxi>capacity[i])){
                maxi=capacity[i];
                index=i;
            }
        }
        return index;
    }
};