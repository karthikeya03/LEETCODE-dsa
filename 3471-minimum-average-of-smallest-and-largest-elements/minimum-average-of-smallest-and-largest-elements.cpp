class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n=nums.size();
        vector<double>res;
        int t=n/2;
        while(t--){
            auto maxt=max_element(nums.begin(),nums.end());
            double maxx=*maxt;
            nums.erase(maxt);
            auto mint=min_element(nums.begin(),nums.end());
            double minn=*mint;
            nums.erase(mint);
            double avg=(double)((maxx+minn)/2);
            res.push_back(avg);
        }
        return *min_element(res.begin(),res.end());
    }
};