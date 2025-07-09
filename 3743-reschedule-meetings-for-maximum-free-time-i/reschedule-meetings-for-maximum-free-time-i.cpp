class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        vector<int > gaps;
        gaps.push_back(startTime[0]);
        for(int i = 1; i < startTime.size(); i++) {
            gaps.push_back(startTime[i] - endTime[i - 1]);
        }
        gaps.push_back(eventTime - endTime.back());

        int win = 0;
        for(int i = 0; i <= k; ++i) {
            win += gaps[i];
        }
        int ans = win;

        for(int i = k + 1;i < gaps.size(); ++i) {
            win += gaps[i] - gaps[i - k - 1];
            ans = max(ans , win);
        }
        return ans;
    }
};