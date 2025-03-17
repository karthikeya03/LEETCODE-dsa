class Solution {
public:
    string reverseWords(string s) {
        string word, result;
        istringstream iss(s);
        while(iss>>word)
        {
            reverse(word.begin(),word.end());
            if (!result.empty()) 
            result+=" ";
            result+=word;
        }
        return result;
    }
};