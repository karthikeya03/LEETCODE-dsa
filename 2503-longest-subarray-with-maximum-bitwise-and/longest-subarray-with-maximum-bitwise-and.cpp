class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int max_val = nums[0];
        
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > max_val) {
                max_val = nums[i];
            }
        }
        int max_len = 0, current_len = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == max_val) {
                current_len++;
                max_len = max(max_len, current_len);
            } else {
                current_len = 0;
            }
        }
        return max_len;
    }
};
