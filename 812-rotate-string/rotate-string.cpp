class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        if(n!=goal.size())
        return false;
        for(int i=0;i<n;++i){
             reverse(s.begin(), s.begin() + (n - 1));
            reverse(s.begin() + (n - 1), s.end());
            reverse(s.begin(), s.end());

            if(s==goal)
            return true;
        }
        return false;
    }
};