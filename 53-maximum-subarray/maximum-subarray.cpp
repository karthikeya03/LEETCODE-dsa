class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxx=INT_MIN;
        int sum=0;
        for(int num:nums){
            sum+=num;
            maxx=max(maxx,sum);
            if(sum<0)
            sum=0;
        }
        return maxx;
    }
};