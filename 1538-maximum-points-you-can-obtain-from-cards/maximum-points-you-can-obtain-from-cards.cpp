class Solution {
public:
    int maxScore(vector<int>&nums, int k) {
        int n=nums.size();
        int i=0; int j=n-1; int maxx=0; int sum=0; int leftsum=0; int rightsum=0;
        for(int i=0;i<k;++i)
            leftsum+=nums[i];
            maxx=leftsum;
        
        for(int i=k-1;i>=0;--i){
            leftsum-=nums[i];
            rightsum+=nums[j];
            j--;
        maxx=max(maxx,leftsum+rightsum);
        }
        
        return maxx;
    }
};