class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        if (strs.size() == 0)
            return "";
        for (int i = 0; i < strs[0].size(); ++i) {
            char ch = strs[0][i];
            for (string s : strs) {
                if (ch == s[i])
                    continue;
                else
                    return prefix;
            }
            prefix = prefix + ch;
        }
        return prefix;
    }
};
