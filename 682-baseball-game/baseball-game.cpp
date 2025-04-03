class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n=operations.size();
        vector<int>Result;
        for(int i=0;i<n;i++){
            if(operations[i]=="C"){
                Result.pop_back();
            }
            else if(operations[i]=="D"){
                Result.push_back(2*Result.back());
            }
            else if(operations[i]=="+"){
                int first_last=Result.back();
                int second=Result[Result.size()-2];
                Result.push_back(first_last+second);
            }
            else{
                Result.push_back(stoi(operations[i]));
            }
        }
        int j=0;
        for(int i:Result){
            j+=int(i);
        }
        return j;
    }
};