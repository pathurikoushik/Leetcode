class Solution {
public:
    string smallestNumber(string pattern) {
        stack<int> st;
        string res = "";
        int number = 1;

        for(int i = 0; i <= pattern.size();i++){
            st.push(number++);

            if ( i == pattern.size() || pattern[i] == 'I') {
                while(!st.empty()){
                    res += to_string(st.top());
                    st.pop();
                }
            }
        }
        return res;
    }
};