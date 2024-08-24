class Solution {
public:
    void reverseString(vector<char>& s){
        int left = 0;
    int right = s.size() - 1;
    
    while (left < right) {
        // Swap characters at left and right indices
        swap(s[left], s[right]);
        
        // Move the pointers towards the center
        left++;
        right--;
    }
    }
};