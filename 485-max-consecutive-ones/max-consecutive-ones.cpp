class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxx=0;
        for(int num:nums){
            if(num==1)
            {
                count++;
                maxx=max(maxx,count);
            }
            else
            count=0;
        }
        return maxx;
    }
};
