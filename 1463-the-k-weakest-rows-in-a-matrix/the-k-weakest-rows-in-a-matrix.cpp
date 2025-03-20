class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> ones_count; // (count of 1s, row index)
        int n = mat.size();

        for (int i = 0; i < n; ++i) {
            int count_ones = count(mat[i].begin(), mat[i].end(), 1);
            ones_count.push_back({count_ones, i});
        }

        // Sort based on the count of 1s, then by row index if counts are equal
        sort(ones_count.begin(), ones_count.end());

        vector<int> result;
        for (int i = 0; i < k; ++i) {
            result.push_back(ones_count[i].second);
        }

        return result;
    }
};
