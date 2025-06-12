class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxx=0;
        for(int j=0;j<nums.size();++j){
            if(nums[j]==1){
                count++;
                maxx=max(maxx,count);
        }
        else
        {
            count=0;
        }
        }
        return maxx;
    }
};
