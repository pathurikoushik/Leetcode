class Solution {
public:
    int maxSum(vector<int>& nums) {
        int maxElement = *max_element(nums.begin(), nums.end());
        if (maxElement <= 0) {
            return maxElement;
        }
        
        unordered_set<int> uniqueNums(nums.begin(), nums.end());
        int sum = 0;
        for (int num : uniqueNums) {
            if (num > 0) {
                sum += num;
            }
        }
        return sum;
    }
};