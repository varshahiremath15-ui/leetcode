class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans;
        int balance = 0;

        // Remove invalid ')'
        for (char c : s) {
            if (c == '(') {
                balance++;
                ans += c;
            }
            else if (c == ')') {
                if (balance > 0) {
                    balance--;
                    ans += c;
                }
            }
            else {
                ans += c;
            }
        }

        // Remove extra '(' from the end
        for (int i = ans.size() - 1; i >= 0 && balance > 0; i--) {
            if (ans[i] == '(') {
                ans.erase(i, 1);
                balance--;
            }
        }

        return ans;
    }
};