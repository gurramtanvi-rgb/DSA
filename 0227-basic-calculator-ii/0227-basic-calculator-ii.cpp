class Solution {
public:
    int calculate(string s) {

        int top = -1;
        char op = '+';
        int num = 0;
        vector<int> st;

        for (int i = 0; i < s.size(); i++) {

            if (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
            }
            if ((!isdigit(s[i]) && s[i] != ' ') || i == s.size() - 1) {

                if (op == '+') {
                    st.push_back(num);
                    top++;
                }
                else if (op == '-') {
                    st.push_back(-num);
                    top++;
                }
                else if (op == '*') {
                    st[top] = st[top] * num;
                }
                else if (op == '/') {
                    st[top] = st[top] / num;
                }

                op = s[i];
                num = 0;
            }
        }

        int res = accumulate(st.begin(), st.end(), 0);
        return res;
    }
};