class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minn = INT_MAX;
        int maxx = 0;

        for (int i = 0; i < n; ++i) {
            int curr = prices[i];
            minn = min(minn, curr);
            int price = curr - minn;
            maxx = max(maxx, price);
        }
        return maxx;
    }
};
