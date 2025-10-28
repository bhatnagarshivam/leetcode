class Solution {
public:
    int secondHighest(string s) {
     int n = s.size();
     int firstlargest=-1,secondlargest=-1;
     for(int i=0;i<n;i++){
        if(isdigit(s[i])){
            int val=s[i]-'0';
            if(val>firstlargest){
                  secondlargest=firstlargest;
                   firstlargest=val;
            }
            else if(val<firstlargest && val>secondlargest){
                secondlargest=val;
            }
        }
     }
      return secondlargest;
    }
};