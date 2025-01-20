class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        std::vector<int> result;
        for (int i = 0; i < nums.size(); i++) { 
            if (nums[i] == val) {
                continue; 
            } else {
                result.push_back(nums[i]);
            }
        }
        int l = result.size(); 
        for (int i = 0; i < l; i++) {
            nums[i] = result[i];
        }
        return l; 
    }
};
