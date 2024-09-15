#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    int findTheLongestSubstring(string s) {
        unordered_map<int, int> firstOccurrence;
        firstOccurrence[0] = -1;
        
        int bitmask = 0;
        int longest = 0;

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'a') bitmask ^= (1 << 0);
            else if (s[i] == 'e') bitmask ^= (1 << 1);
            else if (s[i] == 'i') bitmask ^= (1 << 2);
            else if (s[i] == 'o') bitmask ^= (1 << 3);
            else if (s[i] == 'u') bitmask ^= (1 << 4);
            
            if (firstOccurrence.find(bitmask) != firstOccurrence.end()) {
                longest = max(longest, i - firstOccurrence[bitmask]);
            } else {
                firstOccurrence[bitmask] = i;
            }
        }
        return longest;
    }
};
