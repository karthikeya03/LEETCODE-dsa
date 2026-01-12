class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxx=INT_MIN;
        for(int num:nums)
        {   
            if(sum<0)
            sum=0;
            sum+=num;
            maxx=max(maxx,sum);
        }
        return maxx;
    }
};