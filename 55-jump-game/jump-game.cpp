class Solution {
public:
    bool canJump(vector<int>& nums) {
       int sum=0;
       int maxx=0;
       for(int i=0;i<nums.size();++i){
        if(i>maxx) return false;
        sum=i+nums[i];
        maxx=max(maxx,sum);
       } 
       return true;
    }
};