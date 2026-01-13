class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       int n=strs.size();
       if(n==0)
       return " ";
       sort(strs.begin(),strs.end());
       string first=strs[0];
       string last=strs[n-1];
       int i=0;
       while(i<first.size() && i<last.size()){
        if(first[i]!=last[i])
        break;
        i++;
       }
       return first.substr(0,i);
    }
};