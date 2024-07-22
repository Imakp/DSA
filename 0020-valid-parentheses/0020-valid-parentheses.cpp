class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> brackets = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
        stack<char> st;
        for (char& c : s) {
            if (brackets.count(c)) {
                char topElement = st.empty() ? '#' : st.top();
                if (topElement == brackets[c])
                    st.pop();
                else
                    return false;
            } 
            else
                st.push(c);
        }
        return st.empty();
    }
};