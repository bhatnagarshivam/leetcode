class Solution {
public:
    int totalMoney(int n) {
        int result=0;
        int k=1;
        int cycle=0;
        int a=1;
        while(n!=0){
            if(cycle==7){
                cycle=0;
                k=++a;
            }
            result+=k++;
            cycle++;
            n--;
        }
        return result;
    }
};