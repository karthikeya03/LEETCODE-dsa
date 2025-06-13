class Solution {
public:
    int maxProduct(vector<int>& arr) {
       int first=INT_MIN;
       int sec=INT_MIN;
       for(int i=0;i<arr.size();++i){
        if(arr[i]>first){
            sec=first;
            first=arr[i];
        }
        else if(arr[i]>sec && arr[i]<=first){
            sec=arr[i];
        }
       }
       return (first-1)*(sec-1);
    }
};