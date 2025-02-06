class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size(); int i=0; int j=n-1;
        std::sort(nums.begin(), nums.end());
        vector<int> result;
        while(i<j)
        {
            int sum=0;
            sum=nums[i]+nums[j];
            result.push_back(sum);
            i++;
            j--;
        }
        int maxx = *max_element(result.begin(), result.end());
        return maxx;
    }
};