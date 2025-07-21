class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>less;
        vector<int>equal;
        vector<int>more;
        for(int num:nums){
            if(num<pivot)
            less.push_back(num);
            else if(num==pivot)
            equal.push_back(num);
            else
            more.push_back(num);
        }
vector<int> ans;
    ans.insert(ans.end(), less.begin(), less.end());
    ans.insert(ans.end(), equal.begin(), equal.end());
    ans.insert(ans.end(), more.begin(), more.end());    
    return ans;
    }
};