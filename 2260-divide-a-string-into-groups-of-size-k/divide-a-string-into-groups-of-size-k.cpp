class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        for(int i = 0; i < s.length(); i += k) {
            string chunk = s.substr(i, k);
            if(chunk.length() < k) {
                chunk += string(k - chunk.length(), fill);
            }
            ans.push_back(chunk);
        }
        return ans;
    }
};