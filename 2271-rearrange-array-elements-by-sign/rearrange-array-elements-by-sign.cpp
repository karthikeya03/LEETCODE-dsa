class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos,neg;
        int posIndex=0,negIndex=1;
        for(int num:nums){
            if(num>0)
            pos.push_back(num);
            else
            neg.push_back(num);
        }
        vector<int>result(nums.size());
        for(int i=0;i<nums.size()/2;++i){
            result[posIndex]=pos[i];
            posIndex+=2;
            result[negIndex]=neg[i];
            negIndex+=2;
        }
        return result;
    }
};