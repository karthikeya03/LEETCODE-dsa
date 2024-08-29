class Solution {
public:
    bool isvowel(char c) {
        c = tolower(c);
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }

    bool halvesAreAlike(string s) {
        int n = s.size();
        int mid = n / 2;
        int count1 = 0, count2 = 0;

        for (int i = 0; i < mid; ++i) {
            if (isvowel(s[i])) count1++;
        }

        for (int i = mid; i < n; ++i) {
            if (isvowel(s[i])) count2++;
        }

        return count1 == count2;
    }
};
