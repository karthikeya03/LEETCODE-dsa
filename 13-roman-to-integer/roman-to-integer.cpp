class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        int n = s.length();
        
        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == 'I') {
                num += 1;
            } else if (s[i] == 'V') {
                num += 5;
            } else if (s[i] == 'X') {
                num += 10;
            } else if (s[i] == 'L') {
                num += 50;
            } else if (s[i] == 'C') {
                num += 100;
            } else if (s[i] == 'D') {
                num += 500;
            } else if (s[i] == 'M') {
                num += 1000;
            }

            if (i < n - 1) {
                if (s[i] == 'I' && s[i + 1] == 'V') {
                    num -= 2;
                } else if (s[i] == 'I' && s[i + 1] == 'X') {
                    num -= 2;
                } else if (s[i] == 'X' && s[i + 1] == 'L') {
                    num -= 20;
                } else if (s[i] == 'X' && s[i + 1] == 'C') {
                    num -= 20;
                } else if (s[i] == 'C' && s[i + 1] == 'D') {
                    num -= 200;
                } else if (s[i] == 'C' && s[i + 1] == 'M') {
                    num -= 200;
                }
            }
        }
        
        return num;
    }
};
