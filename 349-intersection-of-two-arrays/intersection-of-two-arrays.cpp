class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st(nums1.begin(), nums1.end());
        unordered_set<int> resultSet;
        
        for(int num : nums2) {
            if(st.count(num))
                resultSet.insert(num);
        }

        vector<int>res(resultSet.begin(),resultSet.end());
        return res;
    }
};