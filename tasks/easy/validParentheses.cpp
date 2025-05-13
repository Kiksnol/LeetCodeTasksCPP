class Solution {
public:
    bool isValid(string s) {
        stack<int> st;

        for (int i = 0; i < s.size(); ++i) {
            switch(s[i]) {
                case '(':
                    st.push(0);
                    break;
                case '[':
                    st.push(1);
                    break;
                case '{':
                    st.push(2);
                    break;
                case ')':
                    if (st.empty() || st.top() != 0)
                        return false;
                    st.pop();
                    break;
                case ']':
                    if (st.empty() || st.top() != 1)
                        return false;
                    st.pop();
                    break;
                case '}':
                    if (st.empty() || st.top() != 2)
                        return false;
                    st.pop();
                    break;
            }
        }

        if (!st.empty())
            return false;

        return true;
    }
};
