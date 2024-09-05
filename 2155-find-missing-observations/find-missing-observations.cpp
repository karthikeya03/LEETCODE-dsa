class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        int total_sum = (m + n) * mean;
        int current_sum = 0;
        for (int roll : rolls) {
            current_sum += roll;
        }
        int missing_sum = total_sum - current_sum;
        
        if (missing_sum < n || missing_sum > 6 * n) {
            return {};
        }

        vector<int> vec;

        while (n) {
            int avg = missing_sum / n;
            if (n == 1) vec.push_back(missing_sum);
            else vec.push_back(avg);
            missing_sum -= avg;
            n--;
        }

        return vec;
    }
};
