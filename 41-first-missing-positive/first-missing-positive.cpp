#include <vector>
#include <algorithm>

class Solution {
public:
    int firstMissingPositive(std::vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        int missing=1; 
        for (int i=0;i<nums.size();++i) {  
            if (nums[i]==missing) {
                missing++; 
            }
        }
        return missing;
    }
};
