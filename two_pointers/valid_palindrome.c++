class Solution {
    char toLower(char c) {
        return tolower(c);
    }
public:

    bool isPalindrome(string s) {
        string st;

        for (int i = 0; i < s.length(); i++) {
            if (isalnum(s[i])) {
                st.push_back(toLower(s[i]));
            }
        }

        int ss = 0;
        int e = st.length() - 1;

        while (ss <= e) {
            if (toLower(st[ss]) != toLower(st[e])) {
                return false;
            } else {
                ss++;
                e--;
            }
        }

        return true;
    }
};
