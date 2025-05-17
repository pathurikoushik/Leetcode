
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> numToIndex;
        
        for (int i = 0; i < nums.size(); i++) {
            if (numToIndex.count(nums[i]) && i - numToIndex[nums[i]] <= k) {
                return true;
            }
            numToIndex[nums[i]] = i;
        }
        
        return false;
    }
};
