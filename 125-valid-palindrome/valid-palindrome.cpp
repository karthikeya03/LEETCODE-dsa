class Solution {
public:
    bool isPalindrome(string s) {
        for (int i = 0; i < s.size(); ) {
            if (isupper(s[i])) {
                s[i] = tolower(s[i]); 
                i++; 
            }
            else if (isspace(s[i]) || !isalnum(s[i])) {
                s.erase(i, 1); 
            }
            else {
                i++; 
            }
        }
        int i = 0;
        int j = s.size() - 1;
        while (i < j) {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }

        return true;
    }
};
