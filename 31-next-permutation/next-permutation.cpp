class Solution {
public:
    int nextGreatest(vector<int>&nums,int idx){
        for(int i=nums.size()-1;i>idx;--i){
            if(nums[i]>nums[idx])
            return i;
        }
        return -1;
    }
    void nextPermutation(vector<int>& nums) {
        int idx=-1;
        for(int i=nums.size()-2;i>=0;--i){
            if(nums[i]<nums[i+1]){
                idx=i;
                break;
            }
        }
        if(idx==-1)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        int ans=nextGreatest(nums,idx);
        swap(nums[idx],nums[ans]);
        reverse(nums.begin()+idx+1,nums.end());
    }
};