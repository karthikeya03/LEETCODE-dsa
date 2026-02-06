class Solution {
public:
    int nextgreatest(vector<int>&arr, int idx,int n){
        for(int i=n-1;i>idx;--i){
            if(arr[i]>arr[idx])
            return i;
        }
        return -1;
    }
    void nextPermutation(vector<int>& arr) {
        int n=arr.size();
        int idx=-1;
        for(int i=n-2;i>=0;--i){
            if(arr[i]<arr[i+1]){
                idx=i;
                break;
            }
        }
        if(idx==-1)
        {
            sort(arr.begin(),arr.end());
            return;
        }
        int ans=nextgreatest(arr,idx,n);
        swap(arr[ans],arr[idx]);
        reverse(arr.begin()+idx+1,arr.end());
    }
};