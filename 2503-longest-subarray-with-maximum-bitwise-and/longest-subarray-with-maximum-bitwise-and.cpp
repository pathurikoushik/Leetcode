class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxVal = nums[0], maxLen = 1, currLen = 1;
        
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > maxVal) {
                maxVal = nums[i];
                maxLen = 1;
                currLen = 1;
            } else if (nums[i] == maxVal) {
                currLen++;
                maxLen = max(maxLen, currLen);
            } else {
                currLen = 0;
            }
        }
        
        return maxLen;
    }
};
