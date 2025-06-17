class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int minn=prices[0];
       int maxx=0;
       for(int num:prices){
        int cost=num-minn;
        maxx=max(cost,maxx);
        minn=min(minn,num);
       }
       return maxx;
    }
};