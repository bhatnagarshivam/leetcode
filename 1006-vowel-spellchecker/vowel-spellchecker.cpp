class Solution {
public:
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        unordered_set<string>ExactMatch(wordlist.begin(),wordlist.end());
        unordered_map<string,string>CaseMatch;
        unordered_map<string,string>VowelMatch;

        for(auto word:wordlist){
            string lowerWord = toLower(word);
            if(CaseMatch.find(lowerWord)==CaseMatch.end()){
                CaseMatch[lowerWord]=word;
            }
            string devowelWord = devowel(word);
            if(VowelMatch.find(devowelWord)==VowelMatch.end()){
                VowelMatch[devowelWord]=word;
            }
        }
        vector<string>result;
        for(auto query:queries){
            if(ExactMatch.find(query)!=ExactMatch.end()){
                result.push_back(query);
                continue;
            }
            string LowerWord = toLower(query);
            if(CaseMatch.find(LowerWord)!=CaseMatch.end()){
                result.push_back(CaseMatch[LowerWord]);
                continue;

            }
            string devowelWord=devowel(query);
            if(VowelMatch.find(devowelWord)!=VowelMatch.end()){
                result.push_back(VowelMatch[devowelWord]);
                continue;
            }
            result.push_back("");
        }
        return result;
    }
        string toLower(string s){
            string res = s;
            for(auto &c : res){
                c=tolower(c);
            }
            return res;
        }
         bool islower(char c){
            c=tolower(c);
            if((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u')){
                return true;
            }
            return false;
         }
         string devowel(string s){
            string res = toLower(s);
            for(auto &c : res){
                if(islower(c)){
                    c='*';
                }
            }
            return res;
         }
};