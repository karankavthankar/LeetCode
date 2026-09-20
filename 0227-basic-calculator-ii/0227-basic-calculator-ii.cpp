class Solution {
public:
    int calculate(string s) {
        vector <int> ans;
        int n=0;
        char op='+';
        s+='+';
        
        for(char ch:s){
            if(ch==' '){
                continue;
            }

            if(isdigit(ch)){
                n=n*10+(ch-'0');
                continue;
            }

            if(op=='+'){
                ans.push_back(n);
            }else if(op=='-'){
                ans.push_back(-n);
            }else if(op=='*'){
                int top=ans.back();
                ans.pop_back();
                ans.push_back(top*n);
            }else if(op=='/'){
                int top=ans.back();
                ans.pop_back();
                ans.push_back(top/n);
            }
            op=ch;
            n=0;
        }
        int fans=0;
        for(int i=0;i<ans.size();i++){
            fans+=ans[i];
        }
        return fans;
    }
};