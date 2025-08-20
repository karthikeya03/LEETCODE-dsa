class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mpp;
        for(char ch:ransomNote)
        mpp[ch]++;
        for(char ch:magazine)
        mpp[ch]--;
        for(auto it:mpp){
            if(it.second>0)
            return false;
        }
        return true;
    }
};