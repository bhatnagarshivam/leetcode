class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.size();
        if(numRows==1 ||s.size()<numRows)  return s;
        int cyclelen = 2*(numRows-1);
        string result="";
        for(int i=0;i<numRows;i++){
           for(int j =i;j<n;j+=cyclelen){
            result+=s[j];

            if( (i!=0 && i!=numRows-1) && (j+cyclelen-2*i)<n){
                result+=s[j+cyclelen-2*i];
            }
           }
        }
           return result; ;
    }
};