class Solution {
public:
    int addDigits(int num) {
        int n = 1+(num - 1) % 9;
        return n;
    }
    
};