class Solution {
public:
   int maxSubArray(vector<int>& nums) {
       int n = nums.size();
       int mAX=INT_MIN;
       int Curr=0;
       for(auto it:nums)
       {
        Curr+=it;
        mAX=max(Curr,mAX);
        if(Curr<0)
        Curr=0;
       }
    return mAX;
   }
};
