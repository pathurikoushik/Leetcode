class Solution {
public:
    bool isSameAfterReversals(int num) {
        return reverse(reverse(num)) ==  num;
    }
private:
    int reverse(int num) {
        int rev = 0;
        while(num > 0) {
            rev = rev * 10 + num % 10;
            num /= 10;
        }
        return rev;
    }
};