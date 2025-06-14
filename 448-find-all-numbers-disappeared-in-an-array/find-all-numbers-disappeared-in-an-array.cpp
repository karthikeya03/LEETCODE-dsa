class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        for (int num : nums) {
            mpp[num]++;
        }

        vector<int> missing;
        for (int i = 1; i <= n; ++i) {
            if (mpp.find(i) == mpp.end()) {
                missing.push_back(i);
            }
        }

        return missing;
    }
};
