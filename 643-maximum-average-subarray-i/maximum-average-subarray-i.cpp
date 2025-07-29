class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0, j = 0, sum = 0;
        int maxx = INT_MIN;

        while (j < n) {
            sum += nums[j];

            if (j - i + 1 < k) {
                j++;
            }
            else if (j - i + 1 == k) {
                maxx = max(maxx, sum);
                sum -= nums[i];
                i++;
                j++;
            }
        }

        return (double)maxx / k;
    }
};
