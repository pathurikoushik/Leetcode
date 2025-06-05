class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (const string& token : tokens) {
            if (token.size() == 1 && (token[0] == '+' || token[0] == '-' || token[0] == '*' || token[0] == '/')) {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                if (token[0] == '+') st.push(a + b);
                else if (token[0] == '-') st.push(a - b);
                else if (token[0] == '*') st.push(a * b);
                else st.push(a / b);
            } else {
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};