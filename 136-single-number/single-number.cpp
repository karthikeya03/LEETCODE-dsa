class Solution {
public:
    int singleNumber(vector<int>& nums) {
         int n=nums.size();
         unordered_map<int,int>mpp;
         for(int num:nums)
         mpp[num]++;
         for(auto ans:mpp){
            if(ans.second==1)
            return ans.first;
         }
         return -1;
    }
};