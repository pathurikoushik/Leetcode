
class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        sort(events.begin(), events.end());
        priority_queue<int, vector<int>, greater<int>> pq;
        int i = 0, res = 0, n = events.size(), d = 1;
        while (i < n || !pq.empty()) {
            while (i < n && events[i][0] <= d) pq.push(events[i++][1]);
            while (!pq.empty() && pq.top() < d) pq.pop();
            if (!pq.empty()) {
                pq.pop();
                res++;
            }
            d++;
        }
        return res;
    }
};
