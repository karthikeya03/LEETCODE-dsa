class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int minn=prices[0];
      int maxx=0;
      for(int num:prices){
        int profit=num-minn;
        maxx=max(maxx,profit);
        minn=min(minn,num);
      }
      return maxx;
    }
};