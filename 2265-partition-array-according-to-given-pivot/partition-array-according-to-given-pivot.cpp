class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less, equal, more;
        for (int num : nums) {
            if (num < pivot) less.push_back(num);
            else if (num == pivot) equal.push_back(num);
            else more.push_back(num);
        }
        vector<int> result;
        result.reserve(nums.size());
        result.insert(result.end(), less.begin(), less.end());
        result.insert(result.end(), equal.begin(), equal.end());
        result.insert(result.end(), more.begin(), more.end());
        return result;
    }
};
