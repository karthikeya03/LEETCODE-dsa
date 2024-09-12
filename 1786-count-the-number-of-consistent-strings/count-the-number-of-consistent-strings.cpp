class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int allowedMask = 0, count = 0;
        for (char c : allowed) allowedMask |= (1 << (c - 'a'));

        for (const string& word : words) {
            int wordMask = 0;
            for (char c : word) wordMask |= (1 << (c - 'a'));
            if ((wordMask & ~allowedMask) == 0) count++;
        }
        return count;
    }
};
