class Solution {
public:
    int secondHighest(string s) {
        vector<int> numbers;

        for(int i=0;i<s.size();i++){
            if(s[i]>='0' && s[i]<='9'){
                numbers.push_back(s[i]-'0');
            }
        }

        if(numbers.size()==0){
            return -1;
        }

        sort(numbers.begin(),numbers.end());
        int large=numbers[numbers.size()-1];
        for(int i=numbers.size()-1;i>=0;i--){
            if(numbers[i]<large){
                return numbers[i];
            }
        }

        return -1;
    }
};