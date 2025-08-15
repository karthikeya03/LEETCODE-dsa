class Solution {
public:
    int maxOperations(vector<int>& nums, int target) {
        int count=0; int maxx=0;
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        while(i<j){
            int sum=nums[i]+nums[j];
            if(sum>target)
            {j--;}
            else if(sum<target){
                i++;
            }
            else{
                i++; j--;
                count++;
                maxx=max(count,maxx);
            }
        }
        return maxx;
    }
};