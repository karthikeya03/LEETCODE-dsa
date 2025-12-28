class Solution {
public:
    int nextGreatest(vector<int>&nums, int idx){
        int n=nums.size();
        int curr=nums[idx];
        int index=-1;
        for(int i=n-1;i>=index;--i){
            if(nums[i]>curr)
            index=i;
        }
        return index;
    }
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int idx=-1;
        for(int i=n-2;i>=0;--i){
            if(nums[i]<nums[i+1]){
                idx=i;
                break;
            }
        }
            if(idx==-1){
                sort(nums.begin(),nums.end());
            }
            else{
                int ans=nextGreatest(nums,idx);
                swap(nums[idx],nums[ans]);
                reverse(nums.begin()+(idx+1),nums.end());
            }
        }
};