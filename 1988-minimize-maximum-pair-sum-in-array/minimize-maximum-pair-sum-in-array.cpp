class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        int i=0; int j=n-1;int result=0;
        sort(nums.begin(),nums.end());
        while(i<=j)
        {
            int sum=nums[i]+nums[j];
            result=max(sum,result);
            j--;
            i++;
        }
        return result;    
 }
};