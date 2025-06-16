class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
       int low=0,mid=0,high=nums.size()-1;
       while(mid<=high){
        if(nums[mid]%2==0)
        {
            swap(nums[mid],nums[low]);
            low++;
            mid++;
        }
        else
        mid++;
       } 
       sort(nums.begin(),nums.begin()+low);
       sort(nums.begin()+low,nums.end());
       return nums;
    }
};