class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int count = 0;
        int ans = -1;

        for (int i = 0; i < nums.size(); ++i) {
            if (i < nums.size() - 1 && nums[i] == nums[i + 1]) {
                ++count;
                if (count == 1) {
                    ans = i;
                }
                ++i; // skip the next one because it's a pair
            } else {
                return nums[i]; // if no pair found, this is the single element
            }
        }

        return nums[nums.size() - 1]; // fallback return
    }
};
