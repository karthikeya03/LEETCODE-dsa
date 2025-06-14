class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       unordered_map<int,int>mpp;
        for(int num:nums)
        mpp[num]++;
        for(auto itt:mpp){
            if(itt.second>1)
            return itt.first;
        }
        return -1;
    }
};