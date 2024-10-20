#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;  
        int n = word1.size(), m = word2.size();
        int i = 0;
        
        while (i < n || i < m) {
            if (i < n) result += word1[i]; 
            if (i < m) result += word2[i];  
            i++;
        }
        return result; 
    }
};
