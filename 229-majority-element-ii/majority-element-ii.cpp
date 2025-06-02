class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count = 1;
        vector<int> result;
        sort(nums.begin(), nums.end()); 

        for (int i = 1; i < nums.size(); ++i) { 
            if (nums[i] == nums[i - 1]) {
                count++;
            } else {
                if (count > nums.size() / 3) {
                    result.push_back(nums[i - 1]);
                }
                count = 1; // Reset count
            }
        }

        // Fix 3: Check the last group
        if (count > nums.size() / 3) {
            result.push_back(nums.back());
        }

        return result;
    }
};
