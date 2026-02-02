class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size(),1);
        int n=nums.size();
        for(int i=1;i<n;++i){
            ans[i]*=ans[i-1]*nums[i-1];
        }
        int right=1;
        for(int i=n-1;i>=0;--i){
            ans[i]*=right;
            right*=nums[i];
        }
        return ans;
    }
};