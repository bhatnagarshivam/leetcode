class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
      int result=0;
        for(string str:operations)
           (str[1]=='+')?result++:result--;
        return result;
    }
};