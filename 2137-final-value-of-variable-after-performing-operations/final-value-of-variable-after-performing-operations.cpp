class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
    
        int result=0;
        for(string str:operations){
            if(str[1]=='+'){
                result++;
            }
            else if(str[1]=='-'){
                result--;
            }
        }
        return result;
    }
};