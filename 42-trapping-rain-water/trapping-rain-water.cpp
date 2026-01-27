class Solution {
public:
    int trap(vector<int>& nums) {
        int n=nums.size();
        int i=0; int j=n-1;
        int left=0; int right=0;
        int ans=0;
        while(i<j){
            left=max(left,nums[i]);
            right=max(right,nums[j]);
            if(left>right){
                ans+=right-nums[j];
                j--;
            }
            else{
                ans+=left-nums[i];
                i++;
            }
        }
        return ans;
    }
};