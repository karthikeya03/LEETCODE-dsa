class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int max_val = *max_element(nums.begin(), nums.end());
        int max_len = 0;
        int start = 0;

        for (int end = 0; end < nums.size(); ++end) {
            if (nums[end] == max_val) {
                max_len = max(max_len, end - start + 1);
            } else {
                start = end + 1;
            }
        }

        return max_len;
    }
};
