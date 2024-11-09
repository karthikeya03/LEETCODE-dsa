class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        if (n != goal.length()) {
            return false;
        }
        
        for (int k = 0; k < n; ++k) {
            string rotated = s.substr(1) + s[0];
            s = rotated;
            if (s == goal) {
                return true;
            }
        }
        
        return false;
    }
};