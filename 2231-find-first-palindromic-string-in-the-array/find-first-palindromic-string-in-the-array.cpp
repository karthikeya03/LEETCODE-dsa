class Solution {
public:
    bool isPalindrome(string s){
        int i=0; int n= s.size();
        int j=n-1;
        while(i<j){
            if(s[i]!=s[j])
                return false;
                i++;
                j--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        string ans="";
        bool fuck=false;
        for(string s: words){
            if(isPalindrome(s)){
                fuck=true;
                ans=s;
                break;
            }
        }
        return ans;
    }
};