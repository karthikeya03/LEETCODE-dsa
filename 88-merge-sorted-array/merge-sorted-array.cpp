class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> sum;

        for (int i = 0; i < m; ++i) {
            sum.push_back(nums1[i]);
        }

        for (int j = 0; j < n; ++j) {
            sum.push_back(nums2[j]);
        }

        sort(sum.begin(), sum.end());
        for(int i=0;i<m+n;++i)
        {
            nums1[i]=sum[i];
        }
    }
};
