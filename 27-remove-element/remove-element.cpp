class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int i = 0, j = nums.size() - 1;
        while (i <= j) { 
            if (nums[i] == val) {
                nums.erase(nums.begin() + i); 
                j--; 
            } else 
                i++; 
        }
        return nums.size(); 
    }
};
