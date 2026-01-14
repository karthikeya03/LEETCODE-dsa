class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==0)
        return "";
        sort(strs.begin(),strs.end());
        string first=strs[0];
        string last=strs[n-1];
        string ans="";
        int len=min(first.size(),last.size());
        for(int i=0;i<len;++i){
            if(first[i]==last[i])
            ans+=first[i];
            else
            break;
        }
        return ans;
    }
};