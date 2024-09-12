class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        bool allowedSet[26] = {};
        for (char c : allowed) allowedSet[c - 'a'] = true;
        int count = 0;
        
        for (const string& word : words) {
            bool isConsistent = true;
            for (char c : word) {
                if (!allowedSet[c - 'a']) {
                    isConsistent = false;
                    break;
                }
            }
            if (isConsistent) count++;
        }
        return count;
    }
};
