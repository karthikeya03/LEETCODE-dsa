class Solution {
public:
    int getLucky(string s, int k) {
        int sum=0;
        for(char c : s)
        {
            int value=c-'a'+1;
            while(value>0)
            {
                sum=sum+value%10;
                value=value/10;
            }
        }

        while(--k)
        {
            int final=0;
            while(sum>0)
            {
                final=final+sum%10;
                sum=sum/10;
            }
            sum=final;
        }
        return sum;
    }
};