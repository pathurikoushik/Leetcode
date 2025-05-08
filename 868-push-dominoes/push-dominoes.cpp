class Solution {
public:
    string pushDominoes(string dominoes) {
        int n = dominoes.size();
        int L = -1, R = -1;

        for(int i = 0; i <= n; ++i) {
            char c = (i < n) ? dominoes[i] : 'R'; 
            if(c == 'R') {
                if(R > L) {
                    for(int j = R; j < i; ++j)
                        dominoes[j] = 'R';
                }
                R = i;
            } 
            else if(c == 'L') {
                if(R > L) {
                    int l = R + 1, r = i - 1;
                    while(l < r) {
                        dominoes[l++] = 'R';
                        dominoes[r--] = 'L';
                    }
                } else {
                    for(int j = L + 1; j < i; ++j)
                        dominoes[j] = 'L';
                }
                L = i; 
            }
        }

        return dominoes;
    }
};
