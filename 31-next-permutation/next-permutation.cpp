class Solution {
public:
    int nextGreatest(int idx,vector<int>&nums){
        for(int i=nums.size()-1;i>=0;--i){
            if(nums[i]>nums[idx])
            return i;
        }
        return -1;
    }
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int idx=-1;
        for(int i=n-2;i>=0;--i){
            if(nums[i]<nums[i+1])
            {
                idx=i;
                break;
            }
        }
        if(idx==-1)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        int ans=nextGreatest(idx,nums);
        swap(nums[idx],nums[ans]);
        reverse(nums.begin()+idx+1,nums.end());
    }
};