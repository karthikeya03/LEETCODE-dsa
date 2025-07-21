class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n=nums.size();
        vector<double>result;
        int t=n/2;
        while(t--){
        int minn=*min_element(nums.begin(),nums.end());
        int maxx=*max_element(nums.begin(),nums.end());
                double avg=(minn+maxx)/2.0;
                result.push_back(avg);
        auto it=find(nums.begin(),nums.end(),minn);
        if(it!=nums.end()) nums.erase(it);
        auto itt=find(nums.begin(),nums.end(),maxx);
        if(itt!=nums.end()) nums.erase(itt);
        }
        return *min_element(result.begin(),result.end());
    }
};