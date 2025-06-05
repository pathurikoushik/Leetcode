class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        st = []
        for i in tokens:
            if i in {"+", "-", "*", "/"}:
                a = st.pop()
                b = st.pop()
                if i == '+':
                    st.append(b + a)
                elif i == '-':
                    st.append(b - a)
                elif i == '*':
                    st.append(b * a)
                else:
                    st.append(int(b / a))
            else:
                st.append(int(i))
        return st[-1]