class Solution {
public:
    int numberOfWays(int n, int x) {
        const int mod = 1e9 + 7;
        vector<int> dp(n + 1, 0);
        dp[0] = 1;

        for (int a = 1; pow(a, x) <= n; ++a) {
            int ax = pow(a, x);
            for (int i = n; i >= ax; --i) {
                dp[i] = (dp[i] + dp[i - ax]) % mod;
            }
        }
        return dp[n];
    }
};