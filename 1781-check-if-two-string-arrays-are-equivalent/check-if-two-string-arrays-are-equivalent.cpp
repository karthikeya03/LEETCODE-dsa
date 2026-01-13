class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string wordone;
        string wordtwo;

        for (int i = 0; i < word1.size(); i++) {
            wordone += word1[i];
        }

        for (int i = 0; i < word2.size(); i++) {
            wordtwo += word2[i];
        }

        return wordone == wordtwo;
    }
};
