class Solution {
public:
   int maxProduct(vector<int>& nums) {
    int maxx = INT_MIN;
        int n = nums.size();
        int start = 1, end = 1;
        for (int i = 0; i < n; ++i) {
            if (start == 0) start = 1;
            if (end == 0) end = 1;
            start *= nums[i];
            end *= nums[n - 1 - i];
            maxx = max(maxx, max(start, end));
        }
        return maxx;
}
};