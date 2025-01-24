class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        int i=0; int j=n-1;
        sort(nums.begin(),nums.end());
        vector<int>result;
        while(i<j)
        {
            result.push_back(nums[i]+nums[j]);
            j--;
            i++;
        }
        return *max_element(result.begin(), result.end());    
 }
};