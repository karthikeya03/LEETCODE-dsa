class Solution {
public:
    int maxProduct(vector<int>& nums) {
      int maxxp=nums[0];
      int minnp=nums[0];
      int ans=nums[0];
      for(int i=1;i<nums.size();++i){
        if(nums[i]<0)
        swap(minnp,maxxp);
        maxxp=max(nums[i],maxxp*nums[i]);
        minnp=min(nums[i],minnp*nums[i]);
        ans=max(ans,maxxp);
      }
      return ans;
    }
};