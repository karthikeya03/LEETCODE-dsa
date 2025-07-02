class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int>mpp;
        for(int i=lowLimit;i<=highLimit;++i){
            int n=i;
            int sum=0;
            while(n){
                sum+=n%10;
                n=n/10;
            }
            mpp[sum]++;
        }
        int maxx=0;
        for(auto it:mpp){
            if(it.second>maxx)
            maxx=it.second;
        }
        return maxx;
    }
};