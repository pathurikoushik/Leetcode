class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        long long n = numerator, d = denominator;
        if (n % d == 0) return to_string(n / d);
        
        string res;
        if ((n < 0) ^ (d < 0)) res += "-";
        n = abs(n), d = abs(d);
        
        res += to_string(n / d) + ".";
        unordered_map<long long, int> map;
        long long r = n % d;
        
        while (r && map.find(r) == map.end()) {
            map[r] = res.size();
            r *= 10;
            res += to_string(r / d);
            r %= d;
        }
        
        if (r) res.insert(map[r], "("), res += ")";
        return res;
    }
};
