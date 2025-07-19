class Solution {
public:
    bool isVowel(char ch) {
        ch = tolower(ch); 
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

    int maxFreqSum(string s) {
        unordered_map<char, int> vowelFreq;
        unordered_map<char, int> consonantFreq;

        for (char ch : s) {
            if (!isalpha(ch)) continue;

            if (isVowel(ch)) 
                vowelFreq[ch]++;
            else 
                consonantFreq[ch]++;
        }

        int maxVowelFreq = 0;
        for (auto tt : vowelFreq) {
            if (tt.second > maxVowelFreq) {
                maxVowelFreq = tt.second;
            }
        }

        int maxConsonantFreq = 0;
        for (auto tt : consonantFreq) {
            if (tt.second > maxConsonantFreq) {
                maxConsonantFreq = tt.second;
            }
        }

        return maxVowelFreq + maxConsonantFreq;
    }
};
