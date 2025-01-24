class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans = "";
        reverse(s.begin(), s.end());
        for (int i = 0; i < n; ++i) {
            string word = "";
            if (i < n && s[i] != ' ') {
                while (i < n && s[i] != ' ') { 
                    word += s[i];
                    i++;
                }
            }
            reverse(word.begin(), word.end());
            if (word.length() > 0) 
                ans += " " + word;
        }
        return ans.empty() ? "" : ans.substr(1); 
    }
};
