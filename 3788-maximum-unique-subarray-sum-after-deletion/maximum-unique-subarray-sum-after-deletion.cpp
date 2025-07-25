// class Solution {
// public:
//     int maxSum(vector<int>& nums) {
//         int maxCurr = nums[0];
//         int maxGlob = nums[0];
//         for (int i = 1; i < nums.size(); i++) {
//             maxCurr = max(nums[i], maxCurr + nums[i]);
//             if(maxCurr > maxGlob)
//                 maxGlob = maxCurr;
//         }
//         return maxGlob;
//     }
// };

class Solution {
public:
    int maxSum(vector<int>& nums) {
        int maxEle = *max_element(nums.begin(), nums.end());
        if(maxEle <= 0) {
            return maxEle;
        }

        unordered_set<int > uniquenames(nums.begin(), nums.end());
        int sum = 0;
        for(int num : uniquenames) {
            if(num > 0) {
                sum += num;
            }
        }
        return sum;
    }
};