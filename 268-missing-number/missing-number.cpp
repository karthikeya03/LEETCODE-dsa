class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int nn;
        nn=n*(n+1)/2;
        int sum=0;
        for(int num:nums){
            sum+=num;
        }
        return nn-sum;
    }
};