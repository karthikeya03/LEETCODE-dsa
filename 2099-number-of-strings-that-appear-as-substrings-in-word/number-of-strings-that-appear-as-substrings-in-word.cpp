class Solution {
public:
    bool issub(string pattern, string word)
    {
        return word.find(pattern)!=string::npos;
    }
    int numOfStrings(vector<string>& patterns, string word) {
        int n=patterns.size();
        int count=0;
      for(int i=0;i<n;++i)
      {
        if(issub(patterns[i],word))
        count=count+1;
      }  
      return count;
    }
};