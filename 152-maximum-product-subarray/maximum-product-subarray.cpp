class Solution {
public:
   int maxProduct(vector<int>& nums) {
    int maxx = nums[0];
    int prod = 1;
    
    // Forward pass
    for (int i = 0; i < nums.size(); ++i) {
        prod *= nums[i];
        maxx = max(maxx, prod);
        if (prod == 0) prod = 1;
    }
    
    prod = 1;
    // Backward pass
    for (int i = nums.size() - 1; i >= 0; --i) {
        prod *= nums[i];
        maxx = max(maxx, prod);
        if (prod == 0) prod = 1;
    }

    return maxx;
}
};