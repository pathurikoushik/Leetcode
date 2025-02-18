class Solution {
 public:
  int numTilePossibilities(string tiles) {
    vector<int> count(26, 0);

    for (char t : tiles)
      count[t - 'A']++;

    return dfs(count);
  }

 private:
  int dfs(vector<int>& count) {
    int sequences = 0;
    
    for (int& c : count) {
      if (c > 0) { 
        c--;  
        sequences += 1 + dfs(count);
        c++;
      }
    }

    return sequences;
  }
};
