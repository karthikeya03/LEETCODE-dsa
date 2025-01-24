class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0;
        int j=n-1;
        int diff;
        int result=0;
        int M=1e9+7;
        vector<int>power(n,1);
        for(int i=1;i<n;++i)
        power[i]=(power[i-1]*2)%M;
         sort(nums.begin(), nums.end());
        while(i<=j)
        {
            if(nums[i]+nums[j]<=target)
            {
                diff=j-i;
                result=(result%M+power[diff])%M;
                i++;
            }
            else
            j--;
        }
        return result;
    }
};