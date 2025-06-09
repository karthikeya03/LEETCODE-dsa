class Solution {
public:
    char findTheDifference(string s, string t) {
     unordered_map<char,int>mpp;
     for(char a:s) mpp[a]++;
     for(char b:t){
        mpp[b]--;
        if(mpp[b]<0)
        return b;
     }
     return -1;
    }
};