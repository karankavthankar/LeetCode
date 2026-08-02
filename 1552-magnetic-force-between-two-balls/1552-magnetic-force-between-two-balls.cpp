class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());

        int left=1,right=position[position.size()-1],ans=0;       

        while(left<=right){
            int mid=left+(right-left)/2,count=1,current=position[0];

            for(int i=1;i<position.size();i++){
                if(position[i]-current>=mid){
                    current=position[i];
                    count++;
                }
            }

            if(count>=m){
                ans=mid;
                left=mid+1;          
            }else{
                right=mid-1;
            }
        }
        return ans;
    }
};