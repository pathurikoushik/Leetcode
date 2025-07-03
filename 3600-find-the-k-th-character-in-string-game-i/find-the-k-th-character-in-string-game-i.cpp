class Solution {
public:
    char kthCharacter(int k) {
        int count = 0;
        k--;
        while(k){
            count  += k & 1;
            k >>= 1;
        }
        return 'a' + count;
    }
};