class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int>mpp;
        for(int i=lowLimit;i<=highLimit;i++)
        {
            int sum=0;
            int n=i;
            while(n){
                sum+=n%10;
                n=n/10;
            }
            mpp[sum]++;
        }
        int maxx=0;
        for(auto itt:mpp){
            if(itt.second>maxx)
            maxx=itt.second;
        }
        return maxx;
    }
};