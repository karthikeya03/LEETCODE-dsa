class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0; int r=k-1;
        int curr=0; int maxx=0;
        for(int i=0;i<=r;++i)
        curr+=nums[i];
        maxx=curr;
        while(r<n-1)
        {
            curr-=nums[l];
            l++;
            r++;
            curr+=nums[r];
            maxx=max(maxx,curr);
        }
      return maxx * 1.0 / k;
    }
};