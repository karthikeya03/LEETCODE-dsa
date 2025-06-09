class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mpp;
        vector<int> result;
        for(int num:nums)
        mpp[num]++;
        for(auto bb:mpp)
        {
            if(bb.second>nums.size()/3)
            result.push_back(bb.first);
        }
        return result;
    }
};
