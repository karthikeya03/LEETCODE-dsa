class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        string neww="";
        while(i<word1.size()||j<word2.size()){
            if(i<word1.size())
            neww+=word1[i++];
            if(j<word2.size())
            neww+=word2[j++];
        }
        return neww;
    }
};