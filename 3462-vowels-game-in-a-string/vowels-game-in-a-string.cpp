class Solution {
public:
    bool doesAliceWin(string s) {
       // Check if there is at least one vowel in the string
        for(char c : s){
            c = tolower(c); // handle uppercase vowels
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                return true; // Alice can remove a substring with odd vowels
        }
        return false; // No vowels → Alice cannot move
    }
};