class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int count=0;
        for(int i=0;i<batteryPercentages.size();i++){
            if(batteryPercentages[i]>0){
                int j=i+1;
                while(j<batteryPercentages.size()){

                    if(batteryPercentages[j]==0){
                        continue;
                    }

                    if(batteryPercentages[j]>0){
                        batteryPercentages[j]-=1;
                    }
                    j++;
                }
                count++;
            }
        }
        return count; 
    }
};