class Solution {
public:
    int reverse(int x) {
        vector<int>result;
        if(x==0)
        result.push_back(0);
        while(x!=0)
        {
            result.push_back(x%10);
            x/=10;
        }
        long nums=0;
        for(int digit:result)
        {
nums=nums*10+digit;
        if(nums>INT_MAX || nums<INT_MIN)
        return 0;
        }
        return (int)nums;
    }
};