class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int , int> map;
        map[0] = 1;
        int sum = 0;
        int res = 0;
        for(int num : nums) {
            sum += num;
            int mod = (sum % k + k) % k;
            if(map.count(mod)) {
                res += map[mod];
            }
            map[mod]++;
        }
        return res;
    }
};