class Solution {
public:
    int countSegments(string s) {
        string word;
        int count=0;
        istringstream iss(s);
        while(iss>>word)
        count++;
        return count;
    }
};