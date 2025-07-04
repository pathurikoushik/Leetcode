class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumAlice = accumulate(aliceSizes.begin(), aliceSizes.end(), 0);
        int sumBob = accumulate(bobSizes.begin(), bobSizes.end(), 0);
        unordered_set<int> s(bobSizes.begin(), bobSizes.end());
        for (int x : aliceSizes)
            if (s.count(x - (sumAlice - sumBob) / 2))
                return {x, x - (sumAlice - sumBob) / 2};
        return {};
    }
};
