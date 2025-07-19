class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }

        vector<int> result;
        for (int curr : nums) {
            int count = 0;
            for (auto it : freq) {
                if (it.first < curr) {
                    count += it.second;
                }
            }
            result.push_back(count);
        }

        return result;
    }
};
