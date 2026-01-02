class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int>a,b;
        unordered_set<int>st1(nums1.begin(),nums1.end());
        unordered_set<int>st2(nums2.begin(),nums2.end());
        for(int num:st1){
            if(!st2.count(num))
            a.push_back(num);
        }
        for(int num:st2){
            if(!st1.count(num))
            b.push_back(num);
        }
        return {a,b};
    }
};