class Solution {
public:
    bool isPalindrome(int x) {
        long reverse=0;
        if(x<0){
            return false;
        }
        int temp=x;
        while(temp>0){
            int remainder = temp%10;
            reverse = reverse*10 + remainder;
            temp/=10;
        }
        return reverse==x; 
    }
};