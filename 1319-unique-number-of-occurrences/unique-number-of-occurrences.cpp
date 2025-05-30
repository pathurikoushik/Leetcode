class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map <int , int> cnt;
        unordered_set<int> occur;

        for(int num:arr) cnt[num]++;
        for(auto& pair: cnt)
            if(!occur.insert(pair.second).second) return false;
        return true;
    }
};