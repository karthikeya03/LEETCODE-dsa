class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int minn=INT_MAX;
       int maxx=0;
       for(int num:prices){
        minn=min(minn,num);
        maxx=max(num-minn,maxx);
       }
       return maxx;
    }
};