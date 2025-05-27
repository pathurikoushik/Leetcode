class Solution {
public:
    bool checkIfPangram(string sentence) {
       unordered_set<char> s;
       for(char c: sentence){
        if(isalpha(c)){
            s.insert(tolower(c));
        }
       } 
       return s.size() == 26;
    }
};