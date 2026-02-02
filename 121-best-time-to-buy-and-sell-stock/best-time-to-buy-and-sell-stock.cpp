class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minn=prices[0];
        int maxx=INT_MIN;
        for(int num:prices){
            minn=min(minn,num);
            int ans=num-minn;
            maxx=max(maxx,ans);
        }
        return maxx;
    }
};