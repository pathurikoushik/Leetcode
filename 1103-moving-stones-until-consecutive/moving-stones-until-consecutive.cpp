class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        
        int x = min(a, min(b, c));
        int z = max(a, max(b, c));
        int y = a + b + c - x - z;
        
        int maxMoves = z - x - 2;
        
        int minMoves = 0;
        if (z - y > 2 && y - x > 2) minMoves = 2;
        else if (z - y >= 2 || y - x >= 2) minMoves = 1;
        
        return {minMoves, maxMoves};
    }
};
