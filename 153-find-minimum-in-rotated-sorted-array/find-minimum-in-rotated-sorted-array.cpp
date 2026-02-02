class Solution {
public:
    int findMin(vector<int>& nums) {
        int i=0;
        for(int j=1;j<nums.size();++j){
            if(nums[j]<nums[i])
            return nums[j];
            i++;
        }
        return nums[0];
    }
};