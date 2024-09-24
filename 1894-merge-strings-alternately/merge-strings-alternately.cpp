class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int i=0,j=0;
        int s1=word1.length();
        int s2=word2.length();
        while(i<s1 && j<s2)
        {
            result+=word1[i++];
            result+=word2[j++];
        }
        while (i < s1) {
            result += word1[i++];
        }
        
        while (j < s2) {
            result += word2[j++];
        }
        return result;
    }
};