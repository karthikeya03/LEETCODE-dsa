class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>st;
        while(n!=1){
            if(st.count(n))
            return false;
            st.insert(n);

            int ans=0;
            while(n>0){
                int d=n%10;
                ans+=d*d;
                n=n/10;
            }
            n=ans;
        }
        return true;
    }
};