class Solution {
public:
    int maximumGain(string s, int x, int y) {
        string high = x > y ? "ab" : "ba";
        string low = x > y ? "ba" : "ab";
        int highVal = max(x, y), lowVal = min(x, y);
        
        int points = 0;
        string temp;
        for (char c : s) {
            if (!temp.empty() && temp.back() == high[0] && c == high[1]) {
                temp.pop_back();
                points += highVal;
            } else {
                temp.push_back(c);
            }
        }
        
        s = temp;
        temp = "";
        for (char c : s) {
            if (!temp.empty() && temp.back() == low[0] && c == low[1]) {
                temp.pop_back();
                points += lowVal;
            } else {
                temp.push_back(c);
            }
        }
        
        return points;
    }
};
