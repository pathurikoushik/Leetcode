class Solution {
public:
    string toHex(int num) {
        unsigned int n = num;
        string res;
        while(n) {
            int r = n % 16;
            char c = r < 10 ? '0' + r : 'a' + r - 10;
            res =  c + res;
            n /= 16;

        }
        return res.empty() ? "0" : res;
    }
};