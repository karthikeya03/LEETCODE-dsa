class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int ans=0;
        int maxx=0;
        for(int i=1;i<nums.size();++i){
            if(nums[i-1]<nums[i]){
                ans+=nums[i]-nums[i-1];
            }
            maxx=max(maxx,ans);
        }
        return maxx;
    }
};