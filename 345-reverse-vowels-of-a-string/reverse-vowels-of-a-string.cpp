class Solution {
public:
    string reverseVowels(string s) {
        int l = 0, r = s.size() - 1;
        while (l < r) {
            if (!isVowel(s[l])) l++;
            else if (!isVowel(s[r])) r--;
            else swap(s[l++], s[r--]);
        }
        return s;
    }
    
    bool isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};

