class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int left=1; int right=1;
        int maxx=nums[0];
        for(int i=0;i<nums.size();++i){
            if(left==0)
            left=1;
            if(right==0)
            right=1;
            left*=nums[i];
            right*=nums[nums.size()-1-i];
            maxx=max(maxx,max(left,right));
        }
        return maxx;
    }
};