class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int curr = 0, maxx = 0;
        for (int i = 0; i < (int)nums.size() - 1; ++i) {
            curr += nums[i];
            maxx = max(curr, maxx);
            if (nums[i + 1] <= nums[i])
                curr = 0;
        }
        curr += nums.back();  
        maxx = max(maxx, curr);  
        return maxx;
    }
};
