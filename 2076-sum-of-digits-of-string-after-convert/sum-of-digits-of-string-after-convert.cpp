#include <iostream>
#include <string>

class Solution {
public:
    int getLucky(std::string s, int k) {
        std::string numStr = "";

        // Convert each character to its corresponding numeric value
        for (char c : s) {
            numStr += std::to_string(c - 'a' + 1);
        }

        int sum = 0;

        // Repeat the sum process k times
        while (k--) {
            sum = 0;
            for (char c : numStr) {
                sum += c - '0';
            }
            numStr = std::to_string(sum);
        }

        return sum;
    }
};
