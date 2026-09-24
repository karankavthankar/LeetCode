class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> arr;

        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                int num1=arr.back();
                arr.pop_back();
                int num2=arr.back();
                arr.pop_back();
                
                if(tokens[i]=="+"){
                    arr.push_back(num2+num1);
                }else if(tokens[i]=="-"){
                    arr.push_back(num2-num1);
                }else if(tokens[i]=="*"){
                    arr.push_back(num2*num1);
                }else{
                    arr.push_back(num2/num1);
                }
            }else{
                arr.push_back(stoi(tokens[i]));
            }
        }
        return arr[0];
    }
};