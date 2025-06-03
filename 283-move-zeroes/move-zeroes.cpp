class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int count=0;
    auto it=nums.begin();
    for(int i=0;i<nums.size();++i){
        if(nums[i]==0)
        {
        nums.erase(it);
        count++;
        it--;
        i--;
        }
    it++;
    }
    while(count--)
    nums.push_back(0);
    }
};