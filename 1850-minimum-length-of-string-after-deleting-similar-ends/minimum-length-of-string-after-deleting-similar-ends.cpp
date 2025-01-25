class Solution {
public:
    int minimumLength(string s) {
        int n=s.size();
        int length=s.size();
        int i=0; int j=n-1;
        while(i<j && s[i]==s[j])
        {
            char ch=s[i];
            while(i<=j && s[i]==ch)
            {
                i++;
                length--;
            }
            while(i<=j && s[j]==ch)
            {
                j--;
                length--;
            }
        }
        return length;
    }
};