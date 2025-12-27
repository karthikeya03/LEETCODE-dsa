class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int maxx=0;
        int minn=INT_MAX;
        for(int i=0;i<nums.size();++i){
            minn=min(minn,nums[i]);
            maxx=max(maxx,nums[i]-minn);
        }
        return maxx;
    }
};