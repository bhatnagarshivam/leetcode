class Solution {
public:
    int findClosest(int x, int y, int z) {
        while(y!=z && x!=z){
             x=(x<z)?x+1:x-1;
             y=(y<z)?y+1:y-1;
        }
        if(x==z && y==z) return 0;
        return (x==z)?1:2; 
    }
};