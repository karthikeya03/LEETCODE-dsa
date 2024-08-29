class Solution {
public:
    bool isvow(char ch) {
        ch = tolower(ch);
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }

    string sortVowels(string s) {
        string chch;
        int n = s.size();
        
        // Collect all vowels from the string
        for (int i = 0; i < n; ++i) {
            if (isvow(s[i])) {
                chch.push_back(s[i]);
            }
        }

        // Sort the collected vowels
        sort(chch.begin(), chch.end());

        // Replace the vowels in the original string with sorted vowels
        for (int i = 0, j = 0; i < n; ++i) {
            if (isvow(s[i])) {
                s[i] = chch[j++];
            }
        }
        
        return s;
    }
};
