class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minn=INT_MAX;
        int maxx=INT_MIN;
        for(int num:prices){
             minn=min(minn,num);
             int profit=num-minn;
             maxx=max(maxx,profit);
        }
        return maxx;
    }
};