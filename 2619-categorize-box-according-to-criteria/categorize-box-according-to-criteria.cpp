class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        bool Bulky=false;
        bool Heavy=false;
        if(mass>=100){
            Heavy=true;
        }
        if((length>=1e4 || width>=1e4 || height>=1e4 )|| 1ll*length*width*height>=1e9){
            Bulky=true;}
        if(Heavy && Bulky) return "Both";
        if(!(Heavy|| Bulky)) return "Neither";
    return (Bulky==1 && Heavy==0)?"Bulky":"Heavy";
    }
};