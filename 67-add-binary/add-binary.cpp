class Solution {
public:
    string addBinary(string a, string b) {
     int n = a.size();
     int m = b.size();
     int i=n-1,j=m-1,carry=0;
     string str="";

     while(i>=0 ||j>=0){
        int count=0;
        if(i>=0 && a[i]=='1'){
            count++;}
        if(j>=0 && b[j]=='1'){
            count++;}
        if(count+carry==2){
            str+='0';
            carry=1;
        }
        else if(count+carry==1)
        {str+='1';
        carry=0;
        }
        else if(count+carry==0)
        { str+='0';
        }
        else{
            str+='1';
            carry=1;
        }
        i--,j--;
     }
     if(carry==1){
        str+='1';
     }
     reverse(str.begin(),str.end());
     while( str.size()>1 && str[0]=='0'){
        str.erase(1,0);
     }
return str;
    }
};