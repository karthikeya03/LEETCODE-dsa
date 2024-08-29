class Solution {
public:
    bool isvow(char ch) {
        ch = tolower(ch);
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }

    string sortVowels(string s) {
        string chch;
        int n = s.size();
        
        for (int i = 0; i < n; ++i) {
            if (isvow(s[i])) {
                chch.push_back(s[i]);
            }
        }

        sort(chch.begin(), chch.end());

        for (int i = 0, j = 0; i < n; ++i) {
            if (isvow(s[i])) {
                s[i] = chch[j++];
            }
        }
        
        return s;
    }
};
