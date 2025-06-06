class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int count = 0;
        int ans = -1;

        for (int i = 0; i < nums.size(); i+=2) {
            if (i < nums.size() - 1 && nums[i] == nums[i + 1]) {
                ++count;
                if (count == 1) {
                    ans = i;
                }
            } else {
                return nums[i]; 
            }
        }
        return -1;
    }
};
