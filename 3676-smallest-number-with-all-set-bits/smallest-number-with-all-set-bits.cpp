class Solution {
public:
    int smallestNumber(int n) {
        int k = 1;
        while((1 << k) - 1 < n) {
            k++;
        }
        return (1 << k) - 1;
    }
};