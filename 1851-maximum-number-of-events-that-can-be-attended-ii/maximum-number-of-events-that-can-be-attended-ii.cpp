
class Solution {
public:
    int maxValue(vector<vector<int>>& events, int k) {
        sort(events.begin(), events.end(), [](vector<int>& a, vector<int>& b) {
            return a[1] < b[1];
        });
        
        int n = events.size();
        vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= k; j++) {
                int start = events[i - 1][0];
                int value = events[i - 1][2];
                int prev = findPrev(events, start, i - 1);
                dp[i][j] = max(dp[i - 1][j], value + dp[prev][j - 1]);
            }
        }
        
        return dp[n][k];
    }
    
    int findPrev(vector<vector<int>>& events, int start, int idx) {
        int left = 0, right = idx;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (events[mid][1] >= start) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};