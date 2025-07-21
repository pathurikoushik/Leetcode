class Solution {
public:
    string makeFancyString(string s) {
        string res;
        for (char c : s) {
            if (res.size() < 2 || !(res.back() == c && res[res.size() - 2] == c)) {
                res.push_back(c);
            }
        }
        return res;
    }
};