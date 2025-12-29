class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int leftProduct=1;
        int rightProduct=1;
        int maxx=nums[0];
        for(int i=0;i<n;++i){
            leftProduct*=nums[i];
            rightProduct*=nums[n-1-i];
            maxx=max(maxx,max(leftProduct,rightProduct));
            if(leftProduct==0)
            leftProduct=1;
            if(rightProduct==0)
            rightProduct=1;
        }
        return maxx;
    }
};