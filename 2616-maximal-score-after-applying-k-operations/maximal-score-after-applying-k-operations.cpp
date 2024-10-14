#include <vector>
#include <queue>
#include <cmath>
using namespace std;

class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> maxHeap(nums.begin(), nums.end());
        long long score = 0;

        for (int i = 0; i < k; ++i) {
            int maxValue = maxHeap.top();
            maxHeap.pop();
            score += maxValue;
            maxHeap.push(ceil(maxValue / 3.0));
        }

        return score;
    }
};
