class FindSumPairs {
private:
    vector<int> nums1, nums2;
    unordered_map<int , int> freq2;

public:
    FindSumPairs(vector<int>& n1, vector<int>& n2) {
        nums1 = n1;
        nums2 = n2;

        for(int num: nums2) {
            freq2[num]++;
        }
    }
    void add(int index, int val) {
        int oldVal = nums2[index];
        freq2[oldVal]--;

        nums2[index] += val;
        freq2[nums2[index]]++;
    }
    int count(int tot) {
        int res = 0;
        for(int num : nums1) {
            int complement = tot - num;

            if(freq2.count(complement)) {
                res += freq2[complement];
            }
        }
        return res;
    }
};