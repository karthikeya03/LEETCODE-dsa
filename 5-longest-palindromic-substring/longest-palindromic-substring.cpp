class Solution {
public:
    string longestPalindrome(string s) {
    int n = s.size(), start = 0, maxLength = 1;
    vector<vector<bool>> dp(n, vector<bool>(n, false));

    for (int i = 0; i < n; i++) dp[i][i] = true;

    for (int length = 2; length <= n; length++) {
        for (int i = 0; i <= n - length; i++) {
            int j = i + length - 1;
            if (s[i] == s[j] && (length == 2 || dp[i + 1][j - 1])) {
                dp[i][j] = true;
                if (length > maxLength) {
                    start = i;
                    maxLength = length;
                }
            }
        }
    }
    return s.substr(start, maxLength);
}

};