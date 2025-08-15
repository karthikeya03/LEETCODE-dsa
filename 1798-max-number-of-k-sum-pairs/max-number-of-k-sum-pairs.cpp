class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int count = 0;

        for (int num : nums) {
            int target = k - num;
            if (freq[target] > 0) { // found a complement
                count++;
                freq[target]--; // use one occurrence of the complement
            } else {
                freq[num]++; // store current number for future pairs
            }
        }

        return count;
    }
};
