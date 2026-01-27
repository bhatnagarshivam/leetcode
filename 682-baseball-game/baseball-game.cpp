class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n = operations.size();
        stack<int>st;
        for(int i=0;i<n;i++){
                if(!st.empty() && operations[i]=="C"){
                st.pop();
                }
                else if(!st.empty() && operations[i]=="D"){
                    int top1=2*st.top();
                    st.push(top1);
                }
                else if(!st.empty() && operations[i]=="+"){
                    int top1=st.top();
                    st.pop();
                    int top2=st.top();
                    st.push(top1);
                    st.push(top1+top2);
                }
                else{
                    st.push(stoi(operations[i]));
                }
        }
        int result=0;
        while(!st.empty()){
            result+=st.top();
            st.pop();
        }
        return result;
    }
};