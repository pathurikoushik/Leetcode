class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        vector<int> res;
        for (auto& q : queries) {
            int k = q[0], trim = q[1];
            vector<pair<string, int>> trimmed;
            for (int i = 0; i < nums.size(); i++) {
                trimmed.push_back({nums[i].substr(nums[i].size() - trim), i});
            }
            sort(trimmed.begin(), trimmed.end());
            res.push_back(trimmed[k - 1].second);
        }
        return res;
    }
};

