class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int num:nums)
        mpp[num]++;
        for(auto itt:mpp)
        {
            if(itt.second>nums.size()/2)
            return itt.first;
        }
        return -1;
    }
};
