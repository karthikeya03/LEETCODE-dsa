class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_set<int>s(nums.begin(),nums.end());
        int count=0;
        for(int num:nums){
            if(s.count(diff+num) && s.count(diff*2+num))
            count++;
        }
        return count;
    }
};