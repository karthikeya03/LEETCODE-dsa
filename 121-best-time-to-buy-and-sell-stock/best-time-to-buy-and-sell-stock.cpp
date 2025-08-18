class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int minn=nums[0];
        int maxx=0;
        for(int i=0;i<nums.size();++i){
            int price=nums[i];
            if(price<minn)
            minn=price;
            int profit=price-minn;
            maxx=max(profit,maxx);
        }
        return maxx;
    }
};