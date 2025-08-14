class Solution {
public:
    int maxArea(vector<int>& h) {
     int maxx=0;
     int i=0,j=h.size()-1;
     while(i<j){
        int width=j-i;
        int height=min(h[i],h[j]);
        int area=width*height;
        maxx=max(area,maxx);
        if(h[i]<h[j])
        i++;
        else 
        j--;
     }
     return maxx;
    }
};