class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int max_val = nums[0];
        int max_len = 0, current_len = 0;

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > max_val) {
                max_val = nums[i];
            }
        }

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == max_val) {
                current_len++;
            } else {
                max_len = max(max_len, current_len);
                current_len = 0;
            }
        }
        max_len = max(max_len, current_len);
        return max_len;
    }
};
