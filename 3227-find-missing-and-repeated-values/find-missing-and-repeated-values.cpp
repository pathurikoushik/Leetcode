class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector <int > count( n * n + 1, 0);
        for(auto& row: grid) {
            for(int num : row) {
                count[num]++;
            }
        }
        int repeated = -1, missing = -1;
        for(int i = 1; i <= n * n; i++) {
            if(count[i] == 0) {
                missing = i;
            }
            else if(count[i] > 1) {
                repeated = i;
            }
        }
        return {repeated, missing};
    }
};