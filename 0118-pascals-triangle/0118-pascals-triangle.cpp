class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> ans={{1}};

        if(numRows==1){
            return ans;
        }

        if(numRows==2){
            ans.push_back({1,1});
            return ans;
        }

        if(numRows>2){
            ans.push_back({1,1});
        }

        for(int i=2;i<numRows;i++){
            int n=i+1,j=1;
            vector<int> temp;

            while(n>0){

                vector<int> arr=ans.back();

                if(n==i+1){
                    temp.push_back(1);
                    n--;
                    continue;
                }

                if(n==1){
                    temp.push_back(1);
                    n--;
                    continue;
                }

                temp.push_back(arr[j]+arr[j-1]);
                n--;
                j++;

            }
            ans.push_back(temp);
        }
    
    return ans;
    }
};