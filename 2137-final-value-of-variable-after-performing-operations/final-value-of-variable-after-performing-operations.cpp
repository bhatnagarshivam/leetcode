class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n = operations.size();
        int value=0;
        for(string str:operations){
            if(str[1]=='+'){
                    value++;
            }
            else{
                value--;
            }
        }
        return value;
    }
};