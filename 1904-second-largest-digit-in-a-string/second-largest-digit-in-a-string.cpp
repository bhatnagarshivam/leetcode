class Solution {
public:
    int secondHighest(string s) {
        int firstlargest=-1,secondlargest=-1;
        for(char c:s){
            if(isdigit(c)){
                int i=c-'0';
                 if(i>firstlargest){
                    secondlargest=firstlargest;
                    firstlargest=i;
                 }
                 else if(i<firstlargest&&i>secondlargest){
                    secondlargest=i;
                 }
            }
        }
        return secondlargest;
    }
};