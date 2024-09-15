#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int findTheLongestSubstring(string s) {
        unordered_map<int, int> bitmaskIndex; 
        bitmaskIndex[0] = -1;  
        
        int bitmask = 0;  
        int longest = 0;  

        for (int i = 0; i < s.length(); ++i) {
            char ch = s[i];
            
            if (ch == 'a') bitmask ^= (1 << 0);
            else if (ch == 'e') bitmask ^= (1 << 1);
            else if (ch == 'i') bitmask ^= (1 << 2);
            else if (ch == 'o') bitmask ^= (1 << 3);
            else if (ch == 'u') bitmask ^= (1 << 4);
            
            if (bitmaskIndex.find(bitmask) != bitmaskIndex.end()) {
                longest = max(longest, i - bitmaskIndex[bitmask]);
            } else {
                bitmaskIndex[bitmask] = i;
            }
        }

        return longest;
    }
};
