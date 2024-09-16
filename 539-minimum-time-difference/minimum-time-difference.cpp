#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;

        for (const string& time : timePoints) {
            int hours = stoi(time.substr(0, 2));
            int mins = stoi(time.substr(3, 2));
            minutes.push_back(hours * 60 + mins);
        }

        sort(minutes.begin(), minutes.end());

        int minDiff = INT_MAX;

        for (int i = 1; i < minutes.size(); ++i) {
            minDiff = min(minDiff, minutes[i] - minutes[i - 1]);
        }

        int lastDiff = (1440 + minutes[0] - minutes.back()) % 1440;
        minDiff = min(minDiff, lastDiff);

        return minDiff;
    }
};
