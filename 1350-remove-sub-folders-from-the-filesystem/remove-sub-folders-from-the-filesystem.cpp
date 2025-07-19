class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        vector<string> res;
        string k;

        sort(folder.begin(), folder.end());

        for (const string& f : folder) {
            if (!k.empty() && f.find(k) == 0 && f[k.size()] == '/') {
                continue;
            }
            res.push_back(f);
            k = f;
        }

        return res;
    }
};
