class Solution {
public:
    int maxProfit(vector<int>& nums) {
      int minn=nums[0];
      int maxx=0;
      for(int num:nums){
        int cost=num-minn;
        maxx=max(maxx,cost);
        minn=min(minn,num);
      }
      return maxx;
    }
};