class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int el=0;
        for(int num:nums){
            if(count==0){
                count=1;
                el=num; 
            }
            else{
            (el==num)?count++:count--;
            }
        }
        return el;
    }
};